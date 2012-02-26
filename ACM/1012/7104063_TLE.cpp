#include <iostream>
using namespace std;
int main() {
	int k;
	int i;
	while(1) {
		cin >> k;
		if(k == 0) {
			break;
		}
		for(i = k + 1; ; i++) {
			int n = 2 * k;
			int j = i;
			int s = 0;
			int counter = 0;
			while(n > k) {
				s = j % n;
				if(s > k) {
					j = i - (n - s);
					counter++;
					n--;
				} else if(s == 0) {
					j = i;
					counter++;
					n--;
				} else {
					break;
				}
			}
			if(counter == k) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
