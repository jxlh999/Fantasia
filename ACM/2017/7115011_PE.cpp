#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int speed, time, last;
	int sum;
	while(1) {
		cin >> n;
		if(n == -1) {
			break;
		}
		sum = last = 0;
		for(int i = 0; i < n; i++) {
			cin >> speed >> time;
			sum += speed * (time - last);
			last = time;
		}
		cout << sum << "miles" << endl;
	}
	return 0;
}
