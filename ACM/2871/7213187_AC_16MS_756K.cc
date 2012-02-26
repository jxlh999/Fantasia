#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	double d1, d2;
	cin >> d1;
	if(d1 == 999) {
		cout << "End of Output" << endl;
		return 0;
	}
	while(cin >> d2, d2 != 999.0) {
		printf("%.2f\n", (d2 - d1));
		d1 = d2;
	}
	cout << "End of Output" << endl;
	return 0;
}
