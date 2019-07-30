#include<stdio.h>
main()
{
	int n,i,fact=1;
	scanf("%d",&n);
	if(n==0||n==1)
	{
		printf("\n1");
	}
		
	else if(n<=20)
	{
		for(i=2;i<=n;i++)
			fact*=i;
		printf("\n%d",fact);
	}
	else
	{
		printf("\nLimit Exceeds");
	}
		
}
