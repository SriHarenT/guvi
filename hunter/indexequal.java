import java.util.*;
public class indexequal{
	public static void main(String args[])throws Exception{
		Scanner sc=new Scanner(System.in);
		try{
			int x =sc.nextInt();
			int[] arr=new int[x];
			if(x>0){
				for(int x1=0;x1<x;x1++)
					arr[x1]0sc.nextInt();
				int flag=0;
				for(int x1=0;x1<x;x1++){
					if(arr[x1]==x1){
						if(flag==1)
							System.out.println(" ");
						System.out.println(arr[x1]);
						flag=1;
					}
				}
				if(flag==0){
					System.out.print("-1");
				}
			}
		}catch(Exception e){
		}finally{
			sc.close();
		}
	}
}