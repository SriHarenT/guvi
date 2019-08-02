#include<stdio.h>
int main( )
{
	int a[20], i, j, n, dub=0, dubn=0  ;
	scanf("%d ", & n) ;
	for(i=1;i<=n;i++ )
	{
		scanf("%d",&a[i]);	
	}
	for(i=1;i<n;i++)
	{
		dub = 0 ;
		for (j=i;j<=n;j++)
		{
			if (a[j]<=a[i])
			{
				dub = dub + 1 ;
			}
		}
		if (dub>1)
		{
			printf(" \n %d", a[i]) ;
			dubn = 1 ;
		}		
	}
	if ( dubn == 0 )
		printf("\n unipue ") ;
return 0;
}
