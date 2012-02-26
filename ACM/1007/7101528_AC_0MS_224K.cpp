#include<iostream>
#include<stdlib.h>
using namespace std;
struct str
{
	char s[55];
	int  sum;
}ss[105];
int com(const void *str1, const void *str2)
{
	struct str *s1 = (struct str*)str1;
	struct str *s2 = (struct str*)str2;
	return s1->sum - s2->sum;
}
int main()
{
	int l, n;
	cin >> l >> n;
	for(int i= 0; i < n; i++) {
		cin >> ss[i].s;
		ss[i].sum = 0;
	    for(int j = 0; j < l; j++) {
		  for(int k = j; k < l; k++) {
			if(ss[i].s[j] > ss[i].s[k]) {
				ss[i].sum++;
			}
		  }
	    }
	
	}
	qsort(ss, n, sizeof(ss[0]), com);
	for(int i = 0; i < n; i++) {
		cout << ss[i].s << endl;
	}
	return 0;
}

