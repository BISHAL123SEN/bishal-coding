#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lb, int ub)
{
    int start = lb;
    int end = ub;
    int pivot = arr[lb];
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

void quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {

        int loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}

void printarray(int arr[], int n)
{
    for (int i=0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main()

{
    int arr[10], lb, ub, i, n;
    printf("ENTER THE NUMBER OF THE ELEMENT ::\n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENT::\n");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("BEFORE SORTING THE ELEMENTS ARE::\n");
    printarray(arr, n);
    quicksort(arr, 0, n-1);

    printf("AFTER SORTING THE ELEMENTS ARE::\n");
    printarray(arr, n);
    return 0;
}

