#include<iostream>
using namespace std;
int main()
{
	int T,i,h,t;
	cin>>T;
	for(i=0;i<T;i++)
	{
		scanf("%d:%d",&h,&t);
		if(t!=0)
			cout<<0<<endl;
		else if(h<13)
			cout<<h+12<<endl;
		else
			cout<<h-12<<endl;
	}
	return 0;
}