#include <iostream>
using namespace std;

int main() {

	double avg = 0.0;
	double cost = 0.0;
	int month = 12;
	while (month--) {
		cin >> cost;
		avg += cost;
	}

	printf("$%.2f", avg / 12.0);
	return 0;

}