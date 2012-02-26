#include<algorithm>
#include<stdio.h>
using namespace std;

int n,tot=0,sum,a[4010],b[4010],c[4010],d[4010];
int lab,lcd,ab[16000010],cd[16000010];
int main()
{
	int sa,sc,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
	lab=lcd=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			ab[lab++]=a[i]+b[j];
			cd[lcd++]=-(c[i]+d[j]);
		}
	sort(&ab[0],&ab[lab]);
	sort(&cd[0],&cd[lcd]);
	i=0;j=0;
	while(i<lab&&j<lcd)
	{
		while(i<lab&&ab[i]<cd[j])
			i++;
		while(j<lcd&&cd[j]<ab[i])
			j++;
		sum=ab[i];sa=0;sc=0;
		while(i<lab&&sum==ab[i])
		{	sa++; i++; }
		while(j<lcd&&sum==cd[j])
		{	sc++; j++; }
        tot+=sa*sc;
	}
	printf("%d\n",tot);
	return 0;
}