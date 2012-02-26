#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct line {
	double k;
	double b;
	bool vertical;
	double x;
}LINE;
int main() {
	int n = 0;
	int x1, y1, x2, y2;
	cin >> n;
	LINE p[2 * n];
	for(int i = 0; i < 2 * n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		if((x2 - x1) == 0) {
			p[i].vertical = true;
			p[i].x = x1;
		} else {
			p[i].k = ((double)(y1 - y2)) / (x1 - x2);
			p[i].b = y1 - p[i].k * x1;
			p[i].vertical = false;
		}
	}
	cout << "INTERSECTING LINES OUTPUT" << endl;
	for(int j = 0; j < n; j++) {
		if(p[2 * j].vertical == true && p[2 * j + 1].vertical == true) {
			if(p[2 * j].x == p[2 * j + 1].x) {
				cout << "LINE" << endl;
			} else {
				cout << "NONE" << endl;
			}
		} else if(p[2 * j].k == p[2 * j + 1].k) {
			if(p[2 * j].b == p[2 * j + 1].b) {
				cout << "LINE" << endl;
			} else {
				cout << "NONE" << endl;
			}
		} else {
			if(p[2 * j].vertical == true) {
				double y = p[2 * j + 1].k * p[2 * j].x + p[2 * j + 1].b;
				printf("POINT %.2f %.2f\n", p[2 * j].x, y);
			} else if(p[2 * j + 1].vertical == true) {
				double y = p[2 * j].k * p[2 * j + 1].x + p[2 * j].b;
				printf("POINT %.2f %.2f\n", p[2 * j + 1].x, y);
			} else {
				double x = (p[2 * j + 1].b - p[2 * j].b) / (p[2 * j].k - p[2 * j + 1].k);
				double y = p[2 * j].k * x + p[2 * j].b;
				printf("POINT %.2f %.2f\n", x, y);
			}
		}
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
}
