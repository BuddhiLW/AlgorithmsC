#include <stdio.h>

main()
{
    int a,b,c;
    a=7,b=1,c=3; // 3^7
    while (a != 0) {
        if ( a % 2 == 0 ) {
            a = a/2;
            c = c*c;
        } else {
            a = a-1;
            b = b*c;
        }
    }
    printf("3^7 = %d \n", b);
}
