#include <iostream>
using namespace std;

int getResult(int max, int num, int sum) {
	for (int i = max; i <= 50; i++) {
		if (sum % i == 0) {
			return i;
		}
	}
	return -1;
}

int main() {
	int num = 0;
	int result[100];
	int j = 0;
	while (1) {
		int sum = 0;
		int max = 0;
		int input = 0;
		cin >> num;
		if (num == 0) {
			break;
		}

		for (int i = 0; i < num; i++) {
			cin >> input;
			sum += input;
			if (max <= input) {
				max = input;
			}
		}

		result[j] = getResult(max, num, sum);

		j++;

	}

	for (int i = 0; i < j; i++) {
		cout << result[i] << endl;
	}

	return 0;
}
