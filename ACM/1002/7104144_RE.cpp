#include <iostream>
#include <stdlib.h>
using namespace std;
int map[] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int com(const void *a, const void *b) {
	int *p,*q;
	p = (int *)a; q = (int *)b;
	if (*p > *q) return 1;
	else if (*p < *q) return -1;
	else return 0;
}
int main() {
	int n, sum;
	n = sum = 0;
	char s[10000];
	int data[1005];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> s;
		int k = 1000000;
		sum = 0;
		for(int j = 0; s[j] != '\0' && k; j++) {
			if(s[j] >= '0' && s[j] <= '9') {
				sum += (s[j] - '0') * k;
				k /= 10;
			} else if(s[j] >= 'A' && s[j] <= 'Z') {
				sum += map[s[j] - 'A'] * k;
				k /= 10;
			}
		}
		data[i] = sum;
	}
	qsort((void *)data, n, sizeof(int), com);
	int count = 0;
	bool flag = false;
	for(int i = 0; i < n; i += count) {
		count = 0;
		for(int j = i; j < n; j++) {
			if(data[i] == data[j]) {
				count++;
			}
		}
		if(count > 1) {
			flag = true;
			cout << data[i] / 10000 << '-' << data[i] % 10000 << ' ' << count << endl;
		}
	}
	if(!flag) {
		cout << "No duplicates." << endl;
	}
	return 0;
}
