#include <iostream>
using namespace std;
int main() {
	int f0, f1, f2;
	int a, b, c;
	while(cin >> f0 >> f1 >> f2) {
		c = f0;
		a = (f2 - 2 * f1 + f0) / 2;
		b = f1 - f0 - a;
		cout << 9 * a + b * 3 + c << " " << 16 * a + b * 4 + c << " " << 25 * a + b * 5 + c << endl;
	}
	return 0;
}
