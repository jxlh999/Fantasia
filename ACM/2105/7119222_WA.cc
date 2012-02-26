#include <iostream>
using namespace std;
const int ip[] = {128, 64, 32, 16, 8, 4, 2, 1};
int main() {
	int n = 0;
	char in[33];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> in;
		for(int j = 0; j < 4; j++) {
			int sum = 0;
			for(int k = 0; k < 8; k++) {
				if(in[j * 8 + k] == '1') {
					sum += ip[k];
				}
			}
			cout << sum << ".";
		}
		cout << endl;
	}
	return 0;
}
