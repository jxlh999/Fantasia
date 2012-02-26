#include <iostream>
using namespace std;
int main() {
	int n, a, b, i;
	while(cin >> n, n) {
		for(i = 0; i < n; i++) {
			cin >> a >> b;
			if((a + b) > 8) {
				cout << i + 1 << endl;
				break;
			}
		}
		if(i == n) {
			cout << "0" << endl;
		}
	}
	return 0;
}
