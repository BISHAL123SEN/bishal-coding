#include <stdio.h>
struct reactangle
{
    int length;
    int breadth;
};
int main()
{
   struct reactangle *r1;
    r1=(struct reactangle *)malloc(sizeof(struct reactangle));
    printf("ENTER THE LENGTH OF  THE RECTANGLE:\n ");
    scanf("%d", &r1->length);
    printf("ENTER THE BREADTH OF  THE RECTANGLE:\n ");
    scanf("%d", &r1->breadth);
    printf("THE AREA OF THE RECTANGLE IS %d\n", r1->length * r1->breadth);
    return 0;
}