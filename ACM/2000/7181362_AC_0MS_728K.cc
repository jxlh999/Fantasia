#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int sum = 0;
	while(cin >> n, n) {
		sum = 0;
		int i = 1;
		int j = 1;
		while(1) {
			if(j == n) {
				sum += i * i;
				break;
			} else if(j > n) {
				sum += (n - (j - i)) * i;
				break;
			} else {
				sum += i * i;
			}
			i++;
			j += i;
		}
		cout << n << " " << sum << endl;
	}
	return 0;
}
