// WAP in C to implement Heap Sort algorithm.

#include<stdio.h>

void heapAdjust(int a[], int i, int n)
{
	int j=2*i, key=a[i];
	while(j<=n)
	{
		if(j<n && a[j]<a[j+1])
		{
			j++;
		}
		if(key>=a[j])
		{
			break;
		}
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=key;
}
void makeheap(int n, int a[])
{
	for(int i=n/2; i>=1; i--)
	{
		heapAdjust(a,i,n);
	}
}
void heapsort( int n, int a[])
{
	makeheap(n, a);
	for(int i=n; i>=2; i--)
	{
		int t=a[i];
		a[i]=a[1];
		a[1]=t;
		heapAdjust(a,1,i-1);
	}
}
void display(int n, int arr[])
{
	for(int i=1; i<=n; i++)
	{
		printf("%3d", arr[i]);
	}
}
int main()
{
	int heap[50], c;
	printf("Enter the num of elements: ");
	scanf("%d", &c);
	for(int i=1; i<=c; i++)
	{
		printf("\nEnter the number %d: ", i);
		scanf("%d", &heap[i]);
	}
	heapsort(c, heap);
	printf("\nThe sorted array is: ");
	display(c, heap);
} 
