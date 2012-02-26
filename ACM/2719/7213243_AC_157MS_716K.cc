#include <iostream>
using namespace std;
const int key[10]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
int main() {
	char s[10];
	int h,i,j,k;
	int top,lev,ss[10];
	while(1) {
		lev= top = k = 0;
		cin >> s;
		if(s[0] == '0') break;
		for(i = 0; s[i] != '\0'; i++) {
			ss[i] = s[i] - 48;
			k= k * 10 + ss[i];
		}
		for(h = 0, j = --i; j >= 0; j--, h++) {
			lev = top;
			top = top * 9 + ss[h];
			if(ss[h] > 4) {
				lev++;
				top--;
			}
			k = k - lev * key[j];
		}
		cout << s << ": " << k << endl;
	}
	return 0;
}
