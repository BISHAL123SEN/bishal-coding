#include <stdio.h>
#include <stdlib.h>
int arr[10][10], n;

void readgraph()
{
    FILE *fp;
    fp = fopen("ad_matrix.txt", "r");
    if (fp == NULL)
    {
        printf("FILE CANT BE OPEN");
    }
    else
    {
        fscanf(fp, "%d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                fscanf(fp, "%d", &arr[i][j]);
            }
        }
    }
    fclose(fp);
}

void printgraph()
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",arr[i][j]);
            

        }
        printf("\n");
    }
}

// int main()
// {
//     readgraph();
//     printgraph();
//     return 0;
// }