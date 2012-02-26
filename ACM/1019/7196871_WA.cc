#include <iostream>
using namespace std;
int main() {
	unsigned int i, j, n, k;
	i = j = n = k = 0;
	cin >> n;
	while(n--) {
		cin >> k;
		j = 0;
		for(i = 1; i < 2147483648; i++) {
			j += i;
			if(j >= k) {
				break;
			}
		}
		cout << i - (j - k) << endl;
	}
	return 0;
}
