#include <iostream>
#include <memory.h>
using namespace std;

struct BIG_NUM {
	int bit_count;
	int num[100];
};

BIG_NUM sum(BIG_NUM a0, BIG_NUM a1, BIG_NUM a2) {
	BIG_NUM num;
	num.bit_count = 1;
	memset(num.num, 0, sizeof(num.num));
	int max_bit = a0.bit_count;
	if(max_bit < a1.bit_count) {
		max_bit = a1.bit_count;
	} 
	if(max_bit < a2.bit_count) {
		max_bit = a2.bit_count;
	}
	num.bit_count = max_bit;
	for(int i = 0; i < max_bit; i++) {
		num.num[i] += a0.num[i] + a1.num[i] + a2.num[i];
		if(num.num[max_bit - 1] >= 10) {
                        num.bit_count++;
                }

		if(num.num[i] >= 10) {
			num.num[i + 1] = num.num[i] / 10;
			num.num[i] = num.num[i] - num.num[i] / 10 * 10;
		}
	}
	return num;
}

int main() {
	BIG_NUM a0, a1, a2;
	int a, b, c;
	while(cin >> a >> b >> c) {
		memset(a0.num, 0, sizeof(a0.num));
        	memset(a1.num, 0, sizeof(a1.num));
	        memset(a2.num, 0, sizeof(a2.num));
		a0.bit_count = a1.bit_count = a2.bit_count = 1;

		for(int j = 10000, k = 4; j >= 1; j /= 10, k--) {
			if(a / j > 0) {
				a0.num[k] = a / j;
				a = a - a / j * j;
				if((k + 1) > a0.bit_count) {
					a0.bit_count = k + 1;
				}
			}
			if(b / j > 0) {
				a1.num[k] = b / j;
				b = b - b / j * j;
				if((k + 1) > a1.bit_count) {
                                        a1.bit_count = k + 1;
                                }
			}
			if(c / j > 0) {
				a2.num[k] = c / j;
				c = c - c / j * j;
				if((k + 1) > a2.bit_count) {
                                        a2.bit_count = k + 1;
                                }
			}
		}

		for(int i = 0; i < 97; i++) {
			if(i % 3 == 0) {
				a0 = sum(a0, a1, a2);
			} else if(i % 3 == 1) {
				a1 = sum(a0, a1, a2);
			} else {
				a2 = sum(a0, a1, a2);
			}
		}
		for(int i = a0.bit_count - 1; i >= 0; i--) {
			cout << a0.num[i];
		}
		cout << endl;
	}
	return 0;
}
