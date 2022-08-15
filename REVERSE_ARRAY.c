#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void Reverse(struct Array *arr)
{
    int *B;
    int i, j;

    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++) // FOR REVERSING AN ARRAY
    {
        B[j] = arr->A[i];
    }

    for (i = 0; i < arr->length; i++) // FOR COPYING THE ARRAY TO THE PREVIOUS ARRAY
    {
        arr->A[i] = B[i];
    }
}

int main()
{
    struct Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
    Reverse(&arr1);
    Display(arr1);
    return 0;
}