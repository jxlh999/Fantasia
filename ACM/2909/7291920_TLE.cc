#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int n) {
	int c = 0;
	for(int i = 2; i < n + 1; i++) {
		if(n % i == 0) {
			c++;
		}
	}
	return c == 1;
}

int main() {
	int count = 0;
	int n = 0;
	while(cin >> n, n) {
		count = 0;
		for(int i = 2; i < n / 2 + 1; i++) {
			if(isprime(i) && isprime(n - i)) {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
