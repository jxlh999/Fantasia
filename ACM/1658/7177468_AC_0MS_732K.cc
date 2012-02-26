#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int in[5];
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < 4; i++) {
			cin >> in[i];
		}
		if(in[3] % in[2] == 0 && in[2] % in[1] == 0 && in[1] % in[0] == 0 && (in[3] / in[2] == in[2] / in[1])
			&& (in[3] / in[2] == in[1] / in[0]) && (in[2] / in[1] == in[1] / in[0])) {
			in[4] = in[3] * (in[3] / in[2]);
		} else {
			in[4] = in[3] + (in[3] - in[2]);
		}
		cout << in[0] << " " << in[1] << " " << in[2] << " " << in[3] << " " << in[4] << endl;
	}
	return 0;
}
