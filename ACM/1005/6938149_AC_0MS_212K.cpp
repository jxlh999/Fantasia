#include <iostream>
#include <math.h>
using namespace std;

int main() {

	const double PI = 3.1415926;
	int count = 0;
	int year[100];
	for (int i = 0; i < 100; i++) {
		year[i] = 0;
	}
	cin >> count;
	for (int j = 0; j < count; j++) {
		double x, y;
		x = y = 0.0;
		cin >> x;
		cin >> y;
		double r = sqrt(x * x + y * y);
		double area = PI * r * r / 2.0;
		year[j] = (int) (area / 50.0) + 1;
	}
	for (int k = 0; k < count; k++) {
		printf("Property %d: This property will begin eroding in year %d.\n", (k
				+ 1), year[k]);
	}

	cout << "END OF OUTPUT." << endl;
	return 0;
}
