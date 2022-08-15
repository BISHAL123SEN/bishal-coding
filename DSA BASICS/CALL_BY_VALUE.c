#include <stdio.h>
void swap(int x, int y)
{
    int temp = x;//x,y is the formal parameter
    x = y;
    y = temp;
}
int main()
{
    int a = 4, b = 5; //a,b is the actual parameter
    swap(a, b);//CALL BY VALUE.......THE VALUE OF THE ACTUAL PARAMETRS ARE NOT CHANGED IN CALL BY VALUE...
    printf("NOW THE VALUE OF a is %d and VALUE OF b is %d\n",a,b);

    return 0;
}