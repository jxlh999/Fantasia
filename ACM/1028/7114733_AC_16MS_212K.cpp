#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
	stack<string> back;
	stack<string> forward;
	string current = "http://www.acm.org/";
	string cmd, www;
	while(1) {
		cin >> cmd;
		if(cmd == "VISIT") {
			cin >> www;
			back.push(current);
			current = www;
			cout << current << endl;
			while(!forward.empty()) {
				forward.pop();
			}
		}
		if(cmd == "QUIT") {
			break;
		}
		if(cmd == "BACK") {
			if(back.size() == 0) {
				cout << "Ignored" << endl;
				continue;
			}
			forward.push(current);
			current = back.top();
			back.pop();
			cout << current << endl;
		}
		if(cmd == "FORWARD") {
			if(forward.size() == 0) {
				cout << "Ignored" << endl;
				continue;
			}
			back.push(current);
			current = forward.top();
			forward.pop();
			cout << current << endl;
		}
	}
	
	return 0;
}
