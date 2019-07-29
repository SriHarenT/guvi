#include<stdio.h>
main()
{
	int n,p=0;
	scanf("%d",&n);
	
	while(n!=0)
	{
		p=(p*10)+(n%10);
		
		n=n/10;
	}
	printf("\n%d",p);
}
