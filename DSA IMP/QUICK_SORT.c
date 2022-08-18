#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int lb, int ub) //FUNCTION FOR PARTITION
{
    int pivot = arr[lb];// PIVOT IS THE FIRST ELEMENT
    int start = lb;
    int end = ub;
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
    swap(&arr[lb], &arr[end]);// WHENEVER start>end
    return end;
}

void quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc - 1); // RECURSIVE CALL QUICK SORT
        quicksort(arr, loc + 1, ub);
    }
}

void printarray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10], lb, ub, n, i;
    // lb = 0;
    // ub = n - 1;
    printf("ENTER THE SIZE OF THE ARRAY::\n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS::\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("BEFORE SORTED THE ELEMENTS ARE::\n");
    printarray(arr, n);
    quicksort(arr, 0, n-1);
    printf("AFTER SORTED THE ELEMENTS ARE::\n");
    printarray(arr, n);
    return 0;
}