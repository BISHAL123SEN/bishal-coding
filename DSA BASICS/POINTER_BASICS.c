#include <stdio.h>
int main()
{
    int *p, a = 10;
    p = &a;
    printf("%d\n", a);//value of a
    printf("%d\n", p);//address of a
    printf("%d\n", *p);//value of a
    printf("%u\n", &a);//address of a
    printf("%u\n", &p);//address of p
    printf("%d\n", *(&p));//address of a

    return 0;
}