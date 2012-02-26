#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main() {
        char ch[1001];
        while(gets(ch) != NULL) {
                string str(ch);
                int index = 0;
                while((index = str.find("you", index)) != -1) {
                        str.replace(index, 3, "we");
                }
                cout << str << endl;
        }
        return 0;
}
