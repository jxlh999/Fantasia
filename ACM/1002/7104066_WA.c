#include<stdio.h>
#include<stdlib.h>

int change[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};

int cmp(const void *a,const void *b)
{
int *p,*q;
p = (int *)a; q = (int *)b;
if (*p > *q) return 1;
else if (*p < *q) return -1;
else return 0;
}

int main()
{
	int sum,
		n,
		i,j,k,
		count,
	    flag,
		data[100005];
	char s[1000];

	scanf("%d",&n);
	for( j=0; j<n; j++ )
	{
		k=1000000;
		sum=0;
		scanf( "%s",s);
		
		for( i=0; s[i]!='\0' && k; i++ )
		{
		   if( s[i]>='0' && s[i]<='9' )
		   {
			   sum+= (s[i]-'0') * k; 
			   k/=10;
		   }
		   else if( s[i]>='A' && s[i]<='Z' )
		   {
			   sum+= change[ s[i]-'A' ] * k;
			   k/=10;
		   }
		}//for
		data[j]=sum;
	}//for
	qsort((void *)data,n,sizeof(int),cmp);
	data[n]=-2;
	sum=-1;
	i=0;
	flag=0;
	while( i<n )
	{
		sum=data[i];
		count=1;
		while( i<n && data[++i]==sum ) count++;
		if( count > 1 )
		{
		  printf("%3d-%4d %d\n",sum/10000,sum%10000,count);//GCC版本：%03－%04
		  flag=1;
		}
	}
	if (!flag) printf("No duplicates.");
	return 0;
}
