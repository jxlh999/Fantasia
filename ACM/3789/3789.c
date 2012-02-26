#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int count = 0;
    char vert[19] = {0};
    char hori[19] = {0};
    int h, m, s;
    scanf("%d", &count);
    int i = 0;
    for (; i < count; i++)
    {
	h = m = s = 0;
	scanf("%d:%d:%d", &h, &m, &s);
	memset((void *)vert, '0', sizeof(vert) - 1);
	memset((void *)hori, '0', sizeof(hori) - 1);
	int ii = 0;
	int mod = 32;
	for (; ii < 6; ii++)
	{
	    if (h / mod == 1)
	    {
		vert[ii * 3] = '1';
		hori[ii] = '1';
		h -= mod;
	    }
	    if (m / mod == 1)
	    {
		vert[ii * 3 + 1] = '1';
		hori[ii + 6] = '1';
		m -= mod;
	    }
	    if (s / mod == 1)
	    {
		vert[ii * 3 + 2] = '1';
		hori[ii + 12] = '1';
		s -= mod;
	    }
	    mod /= 2;
	}
	printf ("%d %s %s\n", i + 1, vert, hori);
	
    }
    return 0;
}

