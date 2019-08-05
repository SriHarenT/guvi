import java.util.Scanner;
public class OddinEven{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int number=sc.nextInt();
		int[] arr=new int[number];
		for(int i=0;i<number;i++){
			arr[i]=sc.nextInt();
		}
		StringBuilder OddEven=new StringBuilder();
		for(int i=0;i<number;i++){
			if((i%2)==0){
				if((arr[i]%2)!=0){
					OddEven.append(String.valueOf(arr[i]));
				}
			}else{
				if((arr[i]%2)==0){
					OddEven.append(String.valueOf(arr[i]));
				}
			}
			if(!(i==(number-1))){
					OddEven.append(" ");
			}
		}
		System.out.println(OddEven);
		sc.close();
	}
}