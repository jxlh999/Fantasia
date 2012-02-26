#include <iostream>
using namespace std;

int main() {

	int num = 0;
	int x = 0;
	int y = 0;
	int i = 0;
	char *result[100];
	cin >> num;
	for (i = 0; i < num; i++) {
		cin >> x;
		cin >> y;
		if (x >= y) {
			result[i] = "MMM BRAINS";
		} else {
			result[i] = "NO BRAINS";
		}
	}

	for (int j = 0; j < i; j++) {
		cout << result[j] << endl;
	}

	return 0;
}
