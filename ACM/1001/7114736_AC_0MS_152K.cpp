#include <stdio.h>
#include <malloc.h>
#include <string>

#define INIT_SIZE 100
#define INCREMENT 100

typedef struct Bignum Bignum;

struct Bignum {
	int *num;
	int size;
	int length;
};

Bignum R,D;
int n,m;

int *getmem(int **p,int size) {
	int *s;
	*p = (int *) realloc(*p,(size + INCREMENT)*sizeof(int));
	s = *p;
	s += size;
	for (int i = 0;i< INCREMENT; s++,i++)
	*s = 0;
	return *p;
}

int *multiply(Bignum &T,Bignum S) {
	int i,j,k;
	Bignum tmp;
	tmp.num = (int *)malloc(sizeof(int)*INIT_SIZE);
	memset(tmp.num,0,sizeof(int)*INIT_SIZE);
	tmp.length = 1;
	tmp.size = INIT_SIZE;
	tmp.length = T.length + S.length - 1;
	while (tmp.length >= tmp.size) {
		getmem(&tmp.num,tmp.size);
		tmp.size += INCREMENT;
	}
	for (i = 0; i < T.length; ++i)
		for (j = 0; j < S.length; ++j)
			tmp.num[i+j] += T.num[i] * S.num[j];
	k = 0;
	for (i = 0; i < tmp.length; ++i) {
		tmp.num[i] += k;
		k = tmp.num[i] / 10;
		tmp.num[i] -= k * 10;
	}
	while (k) {
		tmp.num[tmp.length++] = k % 10;
		k /= 10;
	}
	T.length = tmp.length;
	while (T.size <= T.length) {
		getmem(&T.num,T.size);
		T.size += INCREMENT;
	}
	memcpy(T.num,tmp.num,T.length*sizeof(int));
	free(tmp.num);
	return T.num;
}

int main() {
	char st[20];
	int i,j,k;
	R.num = (int *)malloc(sizeof(int)*INIT_SIZE);
	memset(R.num,0,sizeof(int)*INIT_SIZE);
	R.length = 1;
	R.size = INIT_SIZE;
	D.num = (int *)malloc(sizeof(int)*INIT_SIZE);
	memset(D.num,0,sizeof(int)*INIT_SIZE);
	D.length = 1;
	D.size = INIT_SIZE;
	while (gets(st) != NULL) {
		D.length = 1;
		memset(D.num,0,sizeof(int)*D.size);
		D.num[0] = 1;
		R.length = 0;
		memset(R.num,0,sizeof(int)*R.size);
		for (i=5,j=0,k=0;i >=0 ; --i) {
			if ('0' <= st[i] && st[i] <= '9') {
				R.num[R.length++] = st[i] - '0';
				if (!j) k++;
			}
			else j = 1;
		}
		m = k;
		n = 0;
		for (i=8,k=1;st[i] != ' ';i--) {
			n += (st[i] - '0') * k;
			k *= 10;
		}
		for (i=1;i<=n;i++) {
			multiply(D,R);
		}
		k = m * n-1;
		i = D.length-1;
		while (!D.num[i] && i > k) i--;
		if (i > k)
			for (j = i; j > k; j--)
				printf("%1d",D.num[j]);
		i = 0;
		while (!D.num[i] && i <= k) i++;
		if (i <= k) {
			printf(".");
		for (j = k; j >=i; j--)
			printf("%1d",D.num[j]);
		}
		printf("\n");
	}
	return 0;
}
