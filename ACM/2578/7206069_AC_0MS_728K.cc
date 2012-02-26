#include <iostream>
using namespace std;
int main() {
	int a[3];
	int i = 0;
	cin >> a[0] >> a[1] >> a[2];
	for(i = 0; i < 3; i++) {
		if(a[i] <= 168) {
			cout << "CRASH " << a[i] << endl;
			break;
		}
	}
	if(i == 3) {
		cout << "NO CRASH" << endl;
	}
	return 0;
}
