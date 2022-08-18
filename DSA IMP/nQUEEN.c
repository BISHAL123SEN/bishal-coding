#include<stdio.h>
#include<stdlib.h>
int c=1,x[20];

int place(int k,int i)// KTH ROW,,,,ITH COLOUMN
{   for(int j=1;j<=k-1;j++)
    {
        if(x[j]==i || abs(j-k)==abs(x[j]-i)) //SAME COLOUMN OR SAME ROW...... 
        {
            return 0;
        }
    }
    return 1;    
}

void print(int n)
{ 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i]==j) // IF ROW HAS ANY WUEEN
            {
                printf("Q");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
}

void nQueen(int k,int n)
{
    for(int i=1;i<=n;i++)
    {
        if(place(k ,i)==1) // IF QUEEN GETS A PROPER PLACE
        {
            x[k]=i;
            if(k==n)
            {
                printf("SOLUTION %d is ::\n",c++);
                print(n);
            }
            else
            {
                nQueen(k+1,n);
            }
        }
    }
}
int main()
{
    int n,k;
    printf("ENTER THE NUMBER OF ROWS OR COLOUMN NUMBER ::\n");
    scanf("%d",&n);
    k=1;
    nQueen(k,n);


return 0;
}