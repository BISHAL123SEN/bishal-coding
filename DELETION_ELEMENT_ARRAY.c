#include <stdio.h>

void delete (int arr[], int pos, int length)
{

    int i;
    printf("ENTER THE POSITION YOU WANT TO delete  :\n");
    scanf("%d", &pos);
    if (pos > length)
    {
        printf("INVALID POSITION");
    }
    else
    {

        for (i = pos; i < length; i++)
        {
            arr[i] = arr[i + 1];
        }
        length--;

        printf("FINAL ARRAY IS :");

        for (i = 0; i < length; i++)
        {
            printf(" %d ", arr[i]);
        }
        printf("\n");
    }
}    

    int main()
    {

        int arr[20], length, pos, i;
        printf("ENTER THE SIZE :\n");
        scanf("%d", &length);
        printf("ENTER THE ELEMENTS:\n");
        for (i = 0; i < length; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("\n");
        delete (arr, pos, length);

        return 0;
    }
