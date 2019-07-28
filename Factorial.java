import java.io.*;
import java.util.*;
class Factorial
{
	public static void main(String args[])throws Exception
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int fact=1;
		if(n==0||n==1)
		{
			System.out.println(1);
		}
		else if(n<=20){
			for(int i=2;i<=n;i++)
			{
				fact=fact*i;
			}
			System.out.println(fact);
		}
		else{
			System.out.println("Limit exceeds");
		}
	}
}