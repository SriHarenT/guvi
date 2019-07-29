import java.util.*;
public class Rev{
	public static void main(String a[]){
		try{
			Scanner sc=new Scanner(System.in);
			String sentence=sc.nextLine();
			StringBuilder finalword=new StringBuilder(sentence);
			System.out.println(finalword.reverse().toString());
			sc.close(); 
		}catch(Exception e){
		}
	}
}