#include <iostream>
using namespace std;
int main() {
	int a1, a2, a3, a4, a5, a6;
	int total, area;
	while(cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6, a1 || a2 || a3 || a4 || a5 || a6) {
		total = (a3 + 3) / 4 + a4 + a5 + a6;
		area = a4 * 5;
		if(a3 % 4)
			area += 7 - 2 * (a3 % 4);
		if(a2 > area)
			total += (a2 - area + 8) / 9;
		area = total * 36 - a6 * 36 - a5 * 25 - a4 * 16 - a3 * 9 - a2 * 4;
		if(area < a1)
			total += (a1 - area +35) / 36;
		cout << total << endl;
	}
	return 0;
}

