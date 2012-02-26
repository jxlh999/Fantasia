#include <iostream>
using namespace std;

int main() {
	int p, e, i, d, a, r;

	p = e = i = d = a = r = 0;
	
	cin >> p;
	cin >> e;
	cin >> i;
	cin >> d;

	for (int j = 1; j <= 21252; j++) {
		if (j % 23 == (p % 23) && j % 28 == (e % 28) && j % 33 == (i % 33)) {
			r = j - d;
			break;
		}
	}

	cout << r;

	return 0;
}
