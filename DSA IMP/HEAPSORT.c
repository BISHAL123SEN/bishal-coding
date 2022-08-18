#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* function to heapify a subtree. Here 'i' is the
index of root node in array a[], and 'n' is the size of heap. */
void heapify(int a[], int n, int i)
{
    int largest = i;       // Initialize largest as root
    int left = 2 * i;      // left child
    int right = 2 * i + 1; // right child

    if (left < n && a[left] > a[largest]) // If left child is larger than root
        largest = left;

    if (right < n && a[right] > a[largest]) // If right child is larger than root
        largest = right;

    if (largest != i) // If root is not largest
    {

        swap(&a[i],&a[largest]); // swap a[i] with a[largest]
       

        heapify(a, n, largest); // RECURSIVE CALL TO AGAIN MAKE MAXHEAP
    }
}

void heapSort(int a[], int n)
{
    for (int i = n / 2 ; i >= 0; i--)
        heapify(a, n, i);

    for (int i = n-1 ; i >= 0; i--) // One by one extract an element from heap
    {

      swap(&a[i],&a[0]); // Move current root element to end*/
                          // swap a[0] with a[i]
       

        heapify(a, i, 0); 
    }
}

void printArr(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf(" %d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int a[10], n, i;
    printf("ENTER THE SIZE OF THE ARRAY::\n");
    scanf("%d", &n);
    printf("ENTER THE ELEMENTS::\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before sorting array elements are - \n");
    printArr(a, n);
    heapSort(a, n);
    printf("\nAfter sorting array elements are - \n");
    printArr(a, n);
    return 0;
}