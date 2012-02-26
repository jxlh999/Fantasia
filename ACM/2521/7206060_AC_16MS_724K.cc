#include <iostream>
using namespace std;
int main() {
	int n, m, p, c;
	while(cin >> n >> m >> p >> c, n || m || p || c) {
		cout << (m - p - n) * (-1) << endl;
	}
	return 0;
}
