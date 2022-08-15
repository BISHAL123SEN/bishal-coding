#include <stdio.h>
#include<stdlib.h>
struct array
{
    int A[20];
    int size;
    int length;
};

void DISPLAY(struct array arr)
{
    int i;
    printf("ENTER THE ELEMENTS OF THE ARRAY::\n");
    for (i = 0; i < arr.size; i++)
    {
        printf("%d", arr.A[i]);
    }
    printf("\n");
}

int GET(struct array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void SET(struct array arr, int index)
{
    int ele,i;
    printf("ENTER THE ELEMENT TO BE INSERTED ::\n");
    scanf("%d", &ele);
    if (index >= 0 && index < arr.length)
    {
        arr.length++;
 
    // shift elements forward
    for (i = arr.length-1; i >= index; i--)
        arr.A[i] = arr.A[i - 1];
 
    // insert x at pos
    //arr[index - 1] = x;
 
        arr.A[index] = ele;
        printf("THE ELEMENT IS %d", arr.A[index]);
    }
    else
    {
        printf("YOU ENETERED WRONG  INDEX::\n");
    }
}

int MAX(struct array arr)
{
    int max = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
        return max;
    }
}

int MIN(struct array arr)
{
    int min = arr.A[0];
    int i;
    for (i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
        return min;
    }
}

int SUM(struct array arr)
{
    int i, s = 0;
    for (i = 0; i < arr.length; i++)
    {
        s += arr.A[i];
    }
    return s;
}

float AVG(struct array arr)
{
    return SUM(arr) / arr.length;
}

int main(struct array arr)
{
    struct array arr1;
    int ele, i, ch,index,sum;
    printf("ENTER THE SIZE OF THE ARRAY ::\n");
    scanf("%d", &arr1.length);
    printf("ENETR THE ELEMENTS::\n");
    for (i = 0; i < arr1.length; i++)
    {
        scanf("%d", &arr1.A[i]);
    }

    printf("SOME FUNCTIONS OF ARRAAY ARE:----------------------\n");
    printf("1.SET\n");
    printf("2.GET\n");
    printf("3.MAXIMUM ELEMENT\n");
    printf("4.MINIMUM ELEMENT\n");
    printf("5.SUM OF THE ELEMENT\n");
    printf("6.AVERAGE OF THE ELEMENT\n");
    printf("7.DISPLAY ALL THE ELEMENT\n");
    printf("8.EXIT\n");
    printf("ENTER YOUR CHOICE::\n");
    scanf("%d", &ch);
    while (1)
    {
        switch (ch)
        {
        case 1:
            printf("ENTER THE INDEX YOU WANT TO INSERT THE ELEMENT::\n");
            scanf("%d", &index);
            SET(arr1, index);
            break;

        case 2:

            printf("ENTER THE INDEX YOU WANT TO INSERT THE ELEMENT::\n");
            scanf("%d", &index);
            GET(arr1, index);
            break;

        case 3:
            MAX(arr1);
            printf("THE MAXIMUM ELEMENT IS ::%d\n", MAX(arr1));
             break;

        case 4:
            MIN(arr1);
            printf("THE MINIMUM ELEMENT IS ::%d\n", MIN(arr1));
            break;

        case 5:
            sum=SUM(arr1);
            printf("THE SUM OF THE ELEMENTS ARE ::%d\n",sum);
            break;

        case 6:
            AVG(arr1);
            printf("THE AVERAGE OF THE ELEMENTS ARE ::%d\n", AVG(arr1));
            break;

        case 7:
            DISPLAY(arr1);
            break;

        case 8:
            exit(1);
            break;

        default:
            printf("YOU ENTERDED WRONG CHOICE::\n");
            break;
        }
    }

    return 0;
}
