#include <iostream>
#include <memory.h>
using namespace std;

struct BIG_NUM {
        int bit_count;
        int num[501];
};

BIG_NUM sum(BIG_NUM a0, BIG_NUM a1, BIG_NUM a2) {
        BIG_NUM num;
        num.bit_count = 0;
        memset(num.num, 0, sizeof(num.num));
        int max_bit = a0.bit_count;
        if(max_bit < a1.bit_count) {
                max_bit = a1.bit_count;
        } else if(max_bit < a2.bit_count) {
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

        memset(a0.num, 0, sizeof(a0.num));
        memset(a1.num, 0, sizeof(a1.num));
        memset(a2.num, 0, sizeof(a2.num));

        while(cin >> a0.num[0] >> a1.num[0] >> a2.num[0]) {
                a0.bit_count = a1.bit_count = a2.bit_count = 1;

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
