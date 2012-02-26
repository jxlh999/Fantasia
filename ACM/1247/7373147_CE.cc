#include <iostream>
using namespace std;
int main() {
	int s[31], i, j;
	while(1) {
		scanf("%d", &s[0]);
		if(s[0] == 0) {
			break;
		}
		for(j = 0, i = 1; i <= s[0]; i++) {
			scanf("%d", &s[i]);
			j += s[i];
		}
		for(i = 1;; i++)
			if(s[1] * 2 == j) {
				cout << "Sam stops at position " << i << " and Ella stops at position " 
					<< i + 1 << "." << endl;
				break;
			}
			else if(s[1] * 2 > j) {
				cout << "No equal partitioning." << endl;
				break;
			} else {
				s[1] += s[i + 1];
			}
	}
	return 0;
}
