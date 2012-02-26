#include<stdio.h>

int s[15]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881,13482720};

int main()
{
	int n;

	while(1)
	{
		scanf("%d",&n);
		if(n==0) break;

		printf("%d\n",s[n]);
	}

	return 0;
}