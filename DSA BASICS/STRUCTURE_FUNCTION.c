#include <stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
void initialize(struct rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}
int area(struct rectangle *r)
{
    int c;
    c = r->length * r->breadth;
    return c;
}
void changelength(struct rectangle *r, int l)
{
    r->length = l;
    printf("AFTER CHANGING THE LENGTH ,THE LENGTH WAS::%d\n", r->length = l);
}
void changebreadth(struct rectangle *r, int b)
{
    r->breadth = b;

    printf("AFTER CHANGING THE BREADTH ,THE BREADTH WAS::%d\n", r->breadth = b);
}
int main()
{
    struct rectangle r1;
    printf("ENTER THE VALLUE OF LEMNGTH::\n");
    scanf("%d",& r1.length);
    printf("ENTER THE VALLUE OF LEMNGTH::\n");
    scanf("%d",& r1.breadth);
    initialize(&r1, r1.length, r1.breadth);
    printf("INITIALLY THE AREA WAS::%d\n", area(&r1));
    changelength(&r1, 5);
    changebreadth(&r1, 12);
    printf("INITIALLY THE AREA WAS::%d\n", area(&r1));

    return 0;
}