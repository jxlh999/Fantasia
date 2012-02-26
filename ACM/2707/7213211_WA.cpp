#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	while(cin >> a >> b >> c >> d, a || b || c || d) {
		if(c > d) {
			if(a < b) {
				a = a + b - (b = a);
			}
		} else {
			if(a > b) {
				a = a + b - (b = a);
			}
		}
		if(c * 100 / a >= 100 && d * 100 / b >= 100) {
			cout << 100 << "%" << endl;
			continue;
		}
		if(c * 100 / a < d * 100 / b) {
			cout << (c * 100 / a) << "%" << endl;
		} else {
			cout << (d * 100 / b) << "%" << endl;
		}
	}
	return 0;
}
