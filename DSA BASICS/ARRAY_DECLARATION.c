#include<stdio.h>
int main()
{
    int i,b[5];
    printf("ENTER THE ELEMENTS:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("ELEMENTS ARE ::\n");
     for(i=0;i<5;i++)
    {
        printf(" %d ",b[i]);
        printf("\n");
    }


return 0;
}