#include <stdio.h>
int binarysearch(int arr[], int size, int element)//BINARY SEARCH IS FOR SORTETD ELEMENT
{
    int left, right;
    left = 0;
    right = size - 1;

    while (left <= right) // keep searching untill the left is or equal to right

    {
        int mid = (left + right) / 2;
        if (element == arr[mid])
        {
            return mid;
        }
        else if (element > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}
int main()
{
    /*int arr[] = {2, 4, 8, 10, 13, 54, 87, 97, 1002, 4646};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element =8;*/
    int arr[10], size, element, i;
    printf("ENTER THE SIZE :\n");
    scanf("%d", &size);
    printf("ENTER THE ELEMENTS IN THE ARRAY:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("ENTER THE ELEMENT YOU WANT TO SEARCH :\n");
    scanf("%d", &element);
    
    int index = binarysearch(arr, size, element);
    if (index < 0)
    {
        printf("THE ELEMENT CANANOT FOUND");
    }
    else
    {
        printf("THE ELELMENT IS %d AT POSITION %d", element, index);
    }

    return 0;
}