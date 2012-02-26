#include<stdio.h>

int main()
{
	int n,i;
	int s[100002],t[100002];

	while(1)
	{
		scanf("%d",&n);

		if(n==0)
			break;

		for(i=1;i<=n;i++)
		{
			scanf("%d",&s[i]);
			t[s[i]]=i;
		}

		for(i=1;i<=n;i++)
			if(t[i]!=s[i])
				break;

		if(i<=n)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
	}

	return 0;
}


