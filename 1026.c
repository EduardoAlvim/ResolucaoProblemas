#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y, r;
    while(scanf("%u %u",&x,&y)!=EOF)
    {
        r = x ^ y;
        printf("%u\n",r);
    }
    return 0;
}
