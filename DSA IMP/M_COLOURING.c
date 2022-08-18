#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define n 4

int G[n+1][n+1],m,c=1,check=0;
int X[n+1]={0};

void display()
{
    printf("\n\nSolution %d : ",c++);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",X[i]);
        //if(X[i]>0)
            //check++;
    }
}

void nextValue(int k)
{
    int j;
    do
    {
        X[k]=(X[k]+1)%(m+1);// indicate next higher color
        if(X[k]==0)    // all color have been exhausted
            return;

        for(j=1;j<=k-1;j++) // check the color is distinct from adjacent color
            if(G[k][j]==1 && X[k]==X[j]) // if k,j is an edge and adjacent vertices have identical
                break;

        if(j==k) 
            return; // new color found
    } while (true); // otherwise try to find another color
}

void mColoring(int k)
{
    do
    {
        nextValue(k);
        if(X[k]==0) // no new color possibl
            return;
        
        if(k==n)
            display();

        else
            mColoring(k+1);
    } while(true);
}

int main()
{
    FILE *fp;
    fp=fopen("gcolor.txt","r");
    if(fp==NULL)
    {
        printf("\nError in opening the file !\n");
        exit(1);
    }
    fscanf(fp,"%d",&G[0][0]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fscanf(fp,"%d",&G[i][j]);

    printf("\n   -------- GRAPH COLORING --------\n\n");
    printf("\nEnter the number of colours : ");
    scanf("%d",&m);
    if(m>=1)
    {
        mColoring(1);
        // if(check==0)
        //     printf("\n\nSorry.The graph needs more than %d colour(s) for proper coloring.",m);
    }
    else
    printf("\nInvalid Input.");
}
