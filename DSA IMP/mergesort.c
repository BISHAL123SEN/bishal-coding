#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int b[50], i, j, k, n;
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
        
    }
    if (i > mid) // copy the rest elements
    {
        while (j <= high)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {

            b[k] = a[i];
            i++;
            k++;
        }
    }
    for (i = 0; i <= high; i++)
    {
        a[i] = b[i]; // COPY WHOLE THE ELEMENT TO THE PREVIOUS ARRAY
    }
}
void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int a[50], i, low, high, n;
    printf("ENTER THE SIZE:\n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    low = 0;
    high = n - 1;
    mergesort(a, low, high);
    printf("AFTER THE SORTING THE ELEMENTS ARE::\n");
    for (i = 0; i <= high; i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}