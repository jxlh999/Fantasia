#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main() {
	char input[40];
	int sum = 0;
	while(1) {
		sum = 0;
		cin >> input;
		if(input[0] == '0') {
			break;
		}
		for(int i = 0; i < strlen(input); i++) {
			sum += (input[i] - '0') * ((int)pow(2, strlen(input) - i) - 1);
		}
		cout << sum << endl;
	}
	return 0;
}
