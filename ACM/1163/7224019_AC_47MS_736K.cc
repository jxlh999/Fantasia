#include<iostream>
using namespace std;
int main()
{
	int s[100][100];
	int i,j,k,n;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<=i;j++)
			cin>>s[i][j];

	for(k=n-1;k>0;k--)
	{
		for(j=0;j<k;j++)
			if(s[k][j]+s[k-1][j]>s[k][j+1]+s[k-1][j])
				s[k-1][j]=s[k][j]+s[k-1][j];
			else
				s[k-1][j]=s[k][j+1]+s[k-1][j];
	}
	cout<<s[0][0]<<endl;
	return 0;
}
