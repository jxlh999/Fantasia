#include <iostream>
#include <string>
using namespace std;
int main() {
	char sub[100001];
	char str[100001];
	while(cin >> sub) {
		cin >> str;
		int count = 0;
		for(int i = 0; i < strlen(str); i++) {
			if(str[i] == sub[count]) {
				count++;
			}
		}
		if(count == strlen(sub)) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
