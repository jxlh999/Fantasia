#include <iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	int count = 0;
	cin >> n;
	for(int i = 1; i < n + 1; i++) {
		int j = 0;
		sum = 0;
		while(1) {
			sum += i + j;
			if(sum > n) {
				break;
			}
			if(sum == n) {
				count++;
				break;
			}
			j++;
		}
	}
	cout << count << endl;
	return 0;
}
