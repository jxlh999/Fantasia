#include <iostream>
using namespace std;
int main() {
	int l, s, i, j, c;
	while(cin >> l >> s, l || s) {
		c = l + 1;
		while(s--) {
			cin >> i >> j;
			c -= (j - i) + 1;
		}
		cout << c << endl;
	}
	return 0;
}
