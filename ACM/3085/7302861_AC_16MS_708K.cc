#include <iostream>
using namespace std;
int main() {
	int n, a;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		cout << i + 1; 
		cout << " " << a / 25 << " QUARTER(S),";
		a = a - a / 25 * 25;
		cout << " " << a / 10 << " DIME(S),";
		a = a - a / 10 * 10;
		cout << " " << a / 5 << " NICKEL(S),";
		a = a - a / 5 * 5;
		cout << " " << a << " PENNY(S)" << endl;
	}
	return 0;
}
