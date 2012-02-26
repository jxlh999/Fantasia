#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int n, k, sum;
	int s[1001];
	cin >> n;
	while(n--) {
		cin >> k;
		sum = 0;
		int j = 0;
		for(int i = 0; i < k; i++) {
			cin >> s[i];
			sum += s[i];
		}
		sum /= k;
		for(int i = 0; i < k; i++) {
			if(s[i] > sum) {
				j++;
			}
		}
		printf("%.3f%%\n", 100.0 * j / k);
	}
	return 0;
}
