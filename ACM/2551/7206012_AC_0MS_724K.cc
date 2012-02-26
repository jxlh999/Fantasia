#include <iostream>
using namespace std;
int main() {
	int i, j, k;
	while(cin >> k) {
		i = j = 1;
		while(i) {
			i = 10 * i + 1;
			j++;
			i %= k;
		}
		cout << j << endl;
	}
	return 0;
}
