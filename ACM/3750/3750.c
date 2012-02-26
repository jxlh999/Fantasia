#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count, w, s;
    count = w = s = 0;
    scanf("%d", &count);
    char name[count][20];
    int states[count];
    memset(name, 0, sizeof(name));
    memset(states, 0, sizeof(states));
    
    int i = 0;
    for(; i < count; i++) {
	scanf("%s", name[i]);
    }
    scanf("%d,%d", &w, &s);
    int c = 0;
    int k = w - 1;
    while(1) {
	if (c == (count - 1))
	{
	    break;
	}
	
	if (((k % count) == s) && (states[k % count] == 0))
	{
	    printf ("%s\n", name[k % count]);
	    states[k % count] = 1;
	    c++;
	}
	k++;
    }
    return 0;
}
