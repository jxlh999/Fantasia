#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int n, i, j, t, r, length;
    char str[200];
    char a[100][20];

    while(cin >> n) {
        if(n == 0)
            break;
        cin >> str;
        length = strlen(str);
        r = length / n;
        t = 0;
        for(i = 0; i < r; i++)
            for(j = 0; j < n; j++) {
                if(i % 2 == 0)
                    a[i][j] = str[t];
                if(i % 2 != 0)
                    a[i][n-1-j] = str[t];
                t++;
            }
        for(i = 0;i < n; i++)
            for(j = 0;j < r; j++)
                cout << a[j][i];
        cout << endl;
    }
    return 0;
}
