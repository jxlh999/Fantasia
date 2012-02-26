#include <stdio.h>

int cd(int m, int n) {
        if(m % n == 0) {
                return n;
        } else {
                return cd(n, m % n);
        }
}

void operation(int a, int b, int c, int d, char ops) {
        int up = 0;
        int down = 0;
        switch(ops) {
        case '+':
                up = a * d + b * c;
                down = b * d;
                break;
        case '-':
                up = a * d - b * c;
                down = b * d;
                break;
        default:
                break;
        }
        if(up == 0) {
                printf("0\n");
        } else if(up < 0){
                int g = cd(up * -1, down);
                printf("%d/%d\n", up / g, down / g);
        } else {
                int g = cd(up, down);
                printf("%d/%d\n", up / g, down / g);
        }
}
