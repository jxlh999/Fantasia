#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;
    int a, b, c;
    scanf("%d", &count);
    printf("Gnomes:\n");
    int i = 0;
    for(; i < count; i++) {
	a = b = c = 0;
	scanf("%d %d %d", &a, &b, &c);
        if (a > b) {
            if (b > c) {
                printf("Ordered\n");
            } else {
		printf("Unordered\n");
	    }
        } else {
	    if (b < c) {
		printf("Ordered\n");
	    } else {
		printf("Unordered\n");
	    }
	}
    }
    return 0;
}
