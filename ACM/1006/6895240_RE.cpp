#include <iostream>
using namespace std;

int main() {
	int p, e, i, d, a, x;
	int r[100];

	p = e = i = d = a = x = 0;
	while (1) {
		cin >> p;
		cin >> e;
		cin >> i;
		cin >> d;

		if (p == -1 && e == -1 && i == -1 && d == -1) {
			break;
		}

		for (int j = 1; j <= 21252; j++) {
			if (j % 23 == (p % 23) && j % 28 == (e % 28) && j % 33 == (i % 33)) {
				r[x] = j - d;
				break;
			}
		}

		x++;
	}

	for (int k = 0; k < x; k++) {
		cout << "Case " << (k + 1) << ": the next triple peak occurs in "
				<< r[k] << "days" << endl;
	}

	return 0;
}
