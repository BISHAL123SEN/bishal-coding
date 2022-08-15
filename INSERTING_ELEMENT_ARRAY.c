#include <stdio.h>

void insert(int arr[], int pos, int ele, int length)
{

    int i;
    printf("ENTER THE POSITION YOU WANT TO INSERT  :\n");
    scanf("%d", &pos);
    printf("ENTER THE ELEMNT YOU WANT TO INSERT   :\n");
    scanf("%d", &ele);

    for (i = length; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    length++;
    arr[pos] = ele;
    
    printf("FINAL ARRAY IS :");

    for (i = 0; i <length; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[20], length, pos, ele, i;
    printf("ENTER THE SIZE :\n");
    scanf("%d", &length);
    printf("ENTER THE ELEMENTS:\n");
    for (i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    insert(arr, pos, ele, length);

    return 0;
}
