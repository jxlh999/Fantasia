#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int n) {
	if(n == 1) {
		return false;
	}
	if(n == 2) {
		return true;
	}
	int c = 0;
	for(int i = 2; i < sqrt(n) + 1; i++) {
		if(n % i == 0) {
			c++;
		}
	}
	return c == 0;
}
int main() {
	int a, d, n;
	while(cin >> a >> d >> n, a || d || n) {
		while(n) {
			if(isprime(a)) {
				n--;
			}
			a += d;
		}
		cout << a - d << endl;
	}
	return 0;
}
