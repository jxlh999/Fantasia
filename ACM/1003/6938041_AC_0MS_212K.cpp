#include <iostream>
using namespace std;

int main() {

	int count = 0;
	int result[100];
	for (int k = 0; k < 100; k++) {
		result[k] = 0;
	}

	while (1) {
		double input = 0.0;
		double sum = 0.0;
		cin >> input;
		if (input == 0.00) {
			break;
		}

		for (int i = 1; i < 280; i++) {
			sum += 1.0 / (i + 1);
			if (sum >= input) {
				result[count] = i;
				break;
			}
		}

		count++;
	}

	for (int j = 0; j < count; j++) {
		cout << result[j] << " card(s)" << endl;
	}

	return 0;
}