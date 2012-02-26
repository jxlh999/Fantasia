#include <iostream>
#include <stdio.h>
using namespace std;
int factorial(int n) {
	int rt = 1;
	for(int i = 1; i < n; i++) {
		rt *= i;
	}
	return rt;
}
int main() {
	double e = 2.5;
	cout << "n e" << endl;
	cout << "- -----------" << endl;
	cout << "0 1" << endl;
	cout << "1 2" << endl;
	cout << "2 2.5" << endl;
	for(int i = 3; i < 10; i++) {
		int tmp = factorial(i + 1);
		e += 1.0/ tmp;
		printf("%d %.9f\n", i, e);
	}
	return 0;
}
