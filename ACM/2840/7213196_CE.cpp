#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	string s;
	while(n--) {
		cin >> s;
		int index = s.find(':', 0);
		if(atoi(s.substr(index).data() + 1) == 0) {
			if(atoi(s.substr(0, index).data()) > 12) {
				cout << atoi(s.substr(0, index).data()) - 12 << endl;
			} else {
				cout << 12 + atoi(s.substr(0, index).data()) << endl;
			}
		} else {
			cout << 0 << endl;
		}
	}

	
	return 0;
}
