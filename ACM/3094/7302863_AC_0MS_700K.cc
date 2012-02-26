#include <iostream>
#include <string.h>
using namespace std;
const short s[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
		11, 12, 13, 14, 15, 16, 17, 18, 19,
		20, 21, 22, 23, 24, 25, 26};
int main() {
	string ch;
	while(getline(cin, ch), ch[0] != '#') {
		int sum = 0;
		for(int i = 0; i < ch.length(); i++) {
			if(ch[i] != ' ') {
				sum += s[ch[i] - 'A'] * (i + 1);
			}
		}
		cout << sum << endl;
	}
	return 0;
}
