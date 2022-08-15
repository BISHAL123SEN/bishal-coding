#include<stdio.h>
void display(int arr[],int n)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("THE ARRAY ELEMENTS ARE::%d\n",arr[i]);
    }
}
int main()
{
    int arr[5]={2,4,5,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);

return 0;
}