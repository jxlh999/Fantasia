#include<stdio.h>
int main()
{
	float a,b,c,d,max,mid;

	while(1)
	{
		scanf("%f%f%f%f",&a,&b,&c,&d);
		if(a==0) break;

		if(c/a>d/b) max=d/b;
		else        max=c/a;

		if(c/b>d/a) mid=d/a;
		else        mid=c/b;
		
		if(mid>max) max=mid;
		if(mid>1)   max=1;

		printf("%d%%\n",int(100*max));
	}
	return 0;
}



