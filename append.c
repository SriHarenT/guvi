#include<stdio.h>
main()
{
	char a[50];
	scanf("%[^\n]s",a);
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	a[i]='.';
	printf("\n%s",a);
}
