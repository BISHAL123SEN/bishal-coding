#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int area(struct rectangle r1)
{
    int c;
    c = r1.length * r1.breadth;
    return c;
}
int main()
{
    struct rectangle r = {10, 5};
    int result = area(r);
    printf("THE AREA OF RECTANGLE IS %d\n", result);

    return 0;
}