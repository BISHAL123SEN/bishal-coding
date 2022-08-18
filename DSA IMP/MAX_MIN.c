#include <stdio.h>

int MaxMin(int arr[], int i, int j, int *max, int *min)
{
    if (i == j) // IF ONE ELEMENT IS PRESENT
    {
        *max = arr[i];
        *min = arr[i];
    }
    else if (i == j - 1) // IF 2 ELEMENTS ARE PRESENT
    {
        if (arr[i] < arr[j])
        {
            *max = arr[j];
            *min = arr[i];
        }
        else
        {
            *max = arr[i];
            *min = arr[j];
        }
    }
    else // IF MORE THAN ONE ELEMENTS ARE PRESENT
    {
        int max1, mid, min1;
        mid = (i + j) / 2;
        MaxMin(arr, i, mid, max, min);
        MaxMin(arr, mid + 1, j, &max1, &min1);
        if (*max < max1)
        {
            *max = max1;
        }

        if (*min > min1)
        {
            *min = min1;
        }
    }
    return *max,*min;
}

int main()
{
    int arr[10],n, max, min;
    printf("Enter the size of the array : "); 
    scanf("%d", &n);
        printf("\nEnter the array elements : \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        max=min=arr[0];
        MaxMin(arr, 0, n - 1, &max, &min); //MAX AND MIN PASSES THE ADDRESS AND STORE THE VALUE AFTER CALLING THE FUNCTION
        printf("\nMaximum element is : %d", max);
        printf("\nMinimum element is : %d", min);
    return 0;
} 