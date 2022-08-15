#include <stdio.h>
int linearsearch(int arr[], int n, int element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (element == arr[i])
        {
            return i; // RETURNING THE ARRAY INSEX
        }
    }

    return -1;
}

int main()
{

    int arr[] = {5, 8, 91, 6, 98, 100, 140}; // for unsorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    printf("ENTER THE ANY ELEMENT IN THE ARRAY:\n");
    scanf("%d", &element);
    int index = linearsearch(arr, n, element);
    if (index == -1)
    {
        printf("THE ELEMENT IS NOT FOUND");
    }
    else
    {
        printf("THE ELEMENT IS %d AT POSIOTION %d", element, index);
    }

    return 0;
}