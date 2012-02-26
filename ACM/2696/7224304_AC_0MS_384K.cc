#include<stdio.h>

int mod(int a,int b)
{
	a=a%b;
	if(a<0) 
		return a+b;
	return a;
}

int main()
{
	int a,b,c,d,e,f,g,h,i;
	int j,k,n,s[4];

	scanf("%d",&n);

	for(k=1;k<=n;k++)
	{
		scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);

		s[0]=a;s[1]=b;s[2]=c;
		if(i<3)
		{
			printf("%d\n",s[i]);
			continue;
		}

		for(j=3;j<=i;j++)
		{
			if(j%2)
				s[3]=mod(d*s[2]+e*s[1]-f*s[0],g);
			else
				s[3]=mod(f*s[2]-d*s[1]+e*s[0],h);

			s[0]=s[1];s[1]=s[2];s[2]=s[3];	
		}

		printf("%d\n",s[3]);
	}

	return 0;
}