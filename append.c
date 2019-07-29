#include<stdio.h>
#include<stdlib.h>
main()
{
	char a[10];
	int n;
	scanf("%[^\n]s",a);
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	a[i]='.';
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
}
