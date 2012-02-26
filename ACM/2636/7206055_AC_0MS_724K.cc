#include <iostream>
using namespace std;
int main() {
	int n, k, t, s;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> k;
		s = 0;
		for(int j = 0; j < k; j++) {
			cin >> t;
			s += t;
		}
		cout << s + 1 - k << endl;
	}
	return 0;
}
