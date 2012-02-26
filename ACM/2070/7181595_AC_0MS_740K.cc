#include <iostream>
using namespace std;
int main() {
	double s;
	int a = 0;
	int wt, strength;
	while (1) {
		cin >> s >> wt >> strength;
		if (s == 0.0 && wt == 0 && strength == 0) {
			break;
		}
		if (s <= 4.5 && wt >= 150 && strength >= 200) {
			a = 1;
			cout << "Wide Receiver ";
		}
		if (s <= 6.0 && wt >= 300 && strength >= 500) {
			a = 1;
			cout << "Lineman ";
		}
		if (s <= 5.0 && wt >= 200 && strength >= 300) {
			a = 1;
			cout << "Quarterback ";
		}
		if (a == 1) {
			cout << endl;
		} else {
			cout << "No positions" << endl;
		}
		a = 0;
	}
	return 0;
}
