#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int p,e,i,d,j,k;

	k=0;
	while(1)
	{
		cin>>p>>e>>i>>d;
		k=k+1;
		if(p==-1)
			break;
		for(j=1;j<=21252+d;j++)
			if((j+d-p)%23==0&&(j+d-e)%28==0&&(j+d-i)%33==0)
			{
				printf("Case %d: the next triple peak occurs in %d days.\n",k,j);
				break;
			}
	}
	return 0;
}

