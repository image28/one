#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int func(uint64_t *one)
{

    *(one)=1;
    *(one+1)=2;
    if ( *(one) == 1 )
    {
        *(one)=*(one)+*(one+1)+2;
        printf("%llu\n", *(one));
    }

    return(0);
}

int main()
{
    uint64_t *one;
    one=calloc(3,8);

    return(func(one));
}
