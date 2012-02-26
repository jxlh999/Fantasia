#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
	char *haab[] = {"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu", "uayet"};
	char *tzolkin[] = {"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau"};
	int count, year, alldays, day;
	char month[10];
	char ddd[10];
	cin >> count;
	cout << count << endl;
	for(int i = 0; i < count; i++) {
		cin >> ddd >> month >> year;
		day = atoi(ddd);
		for(int j = 0; j < 19; j++) {
			if(strcmp(haab[j], month) == 0) {
				alldays = year * 365 + j * 20 + day + 1;
			}
		}
		if(alldays % 260 == 0) {
			year = alldays / 260 - 1;
		} else {
			year = alldays / 260;
		}
		int m = alldays % 13;
		if(m == 0) {
			m = 13;
		}
		day = alldays % 20; 
		if(day == 0) {
			day = 20;
		}
		cout << m << " " << tzolkin[day - 1] << " " << year << endl;
	}
	return 0;
}
