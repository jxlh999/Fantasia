#include<stdio.h>
#include<math.h>
bool is_prime(int n){
	int i;
	for(i=2;i<=(int)sqrt(n);i++)
		if(n%i==0)
			break;
	if(i>(int)sqrt(n))
		return 1;
	else 
		return 0;
}
int main()
{
	int n,i;
	while(1==scanf("%d",&n)&&n!=0){
		int count=0;
		for(i=2;i<=n/2;i++)
			if(is_prime(i)&&is_prime(n-i))
				count++;
		printf("%d\n",count);
		}
		return 0;
}