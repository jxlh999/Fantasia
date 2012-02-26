#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int n, b, c, d;
	char a1[12];
	char a2[12];
	cin >> n;
	while(n--) {
		b = c = 0;
		cin >> a1;
		cin >> a2;
		int tmp = 1;
		for(int i = 0; i < strlen(a1); i++) {
			if(a1[i] >= '2' && a1[i] <= '9') {
				switch (a1[i]) {
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					tmp = a1[i] - '0';
					break;
				default:
					tmp = 1;
					break;
				}
			} else {
				switch (a1[i]) {
				case 'm':
					b += tmp * 1000;
					tmp = 1;
					break;
				case 'c':
					b += tmp * 100;
					tmp = 1;
					break;
				case 'x':
					b += tmp * 10;
					tmp = 1;
					break;
				case 'i':
					b += tmp * 1;
					tmp = 1;
					break;
				}
			}
		}
		tmp = 1;
		for(int i = 0; i < strlen(a2); i++) {
			if(a2[i] >= '2' && a2[i] <= '9') {
				switch (a2[i]) {
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					tmp = a2[i] - '0';
					break;
				default:
					tmp = 1;
					break;
				}
			} else {
				switch (a2[i]) {
				case 'm':
					c += tmp * 1000;
					tmp = 1;
					break;
				case 'c':
					c += tmp * 100;
					tmp = 1;
					break;
				case 'x':
					c += tmp * 10;
					tmp = 1;
					break;
				case 'i':
					c += tmp * 1;
					tmp = 1;
					break;
				}
			}
		}
		d = b + c;
		if(d / 1000 == 1) {
			cout << "m";
			d -= d / 1000 * 1000;
		} else if(d / 1000 > 1) {
			cout << (d / 1000) << "m";
			d -= d / 1000 * 1000;
		}
		if(d / 100 == 1) {
			cout << "c";
			d -= d / 100 * 100;
		} else if(d / 100 > 1) {
			cout << (d / 100) << "c";
			d -= d / 100 * 100;
		}
		if(d / 10 == 1) {
			cout << "x";
			d -= d / 10 * 10;
		} else if(d / 10 > 1) {
			cout << (d / 10) << "x";
			d -= d / 10 * 10;
		}
		if(d == 1) {
			cout << "i";
		} else if(d > 1) {
			cout << d << "i";
		}
		cout << endl;
	}
	return 0;
}
