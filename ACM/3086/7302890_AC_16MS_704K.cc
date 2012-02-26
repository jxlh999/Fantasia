#include <iostream>
using namespace std;
int getsum(int n) {
	int sum = 0;
	for(int i = 1; i <= n; i++) sum += i;
	return sum;
}
int main() {
	int c, n;
	cin >> c;
	int j = 0;
	while(c--) {
		cin >> n;
		cout << ++j << " " << n << " ";
		int sum = 0;
		for(int k = 1; k <= n; k++) {
			sum += k * getsum(k + 1);
		}
		cout << sum << endl;
	}
	return 0;
}
