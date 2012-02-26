#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double n, p;
	while(cin >> n >> p) {
		cout << pow(p, 1/n) << endl;
	}
}
