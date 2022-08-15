#include <stdio.h>
int binarysearch(int arr[], int size, int left, int right, int element)
{

    while (left <= right) // keep searching untill the left is or equal to right

    {
        int mid = (left + right) / 2;
        if (element == arr[mid])
        {
            return mid;
        }
        else if (element > arr[mid])
        {
            return binarysearch(arr, size, mid + 1, right, element);
        }
        else
        {
            return binarysearch(arr, size, left, mid - 1, element);
        }
    }
    return -1;
}
int main()
{

    int arr[10], size, element, i, left, right;

    printf("ENTER THE SIZE :\n");
    scanf("%d", &size);
    printf("ENTER THE ELEMENTS IN THE ARRAY:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE ELEMENT YOU WANT TO SEARCH :\n");
    scanf("%d", &element);
    left = 0;
    right = size - 1;
    int index = binarysearch(arr, size, left, right, element);
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