#include <iostream>
#include <string.h>
using namespace std;
const char plain[] = { 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F',
		 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
		 'S', 'T', 'U' };
int main() {
	string cipher;
	char text[250];
	while(1) {
		getline(cin, cipher);
		if(cipher.compare("START") == 0 || cipher.compare("END") == 0) {
			continue;
		} else if(cipher.compare("ENDOFINPUT") == 0) {
			break;
		}
		int i = 0;
		for(i = 0; i < cipher.size(); i++) {
			if(cipher[i] >= 'A' && cipher[i] <='Z') {
				text[i] = plain[cipher[i] - 'A'];
			} else {
				text[i] = cipher[i];
			}
		}
		text[i] = '\0';
		cout << text << endl;
	}
	return 0;
}
