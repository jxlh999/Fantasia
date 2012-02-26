#include <iostream>
using namespace std;
int main() {
	int r, m ,y;
	cin >> r >> m >> y;
	double sum = m;
	for(int i = 0; i < y; i++) {
		sum *= (r / 100.0 + 1);
	}
	cout << (int)sum << endl;
	return 0;
}
