#include <iostream>
#include <memory.h>
using namespace std;

const int max = 1000005;

bool isprime[::max];

int main(){

	int i,j;
	
	memset(isprime,true,sizeof(isprime));
	
	for(i = 3 ; i <= 1000 ; i += 2 ){
		
		for(j = 3 ; j <= ::max / i ; j += 2){
		
			if(isprime[i]){
			
				isprime[i * j] = false;	
			}	
		}	
	}
	
	for(i = 4 ; i <= ::max ; i += 2 ){
		
		isprime[i] = false;	
	}
	isprime[1] = isprime[0] = false;
	
	int a,d,n;
	
	while(cin >> a >> d >> n && !(!a && !d && !n)){
		
		int num[250] = {0};
		
		int j = 1;
		
		for(int i = a ; j <= n ; i += d){
			
			if(isprime[i]){
				
				num[j++] = i;	
			}	
		}	
		
		cout << num[n] << endl;
	}
	return 0;
}