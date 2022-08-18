#include <stdio.h>
#include <limits.h>

struct Prim
{
    int key;
    char parent;
    char sptset;
};
struct Prim prim[100];
int G[100][100], v;

int extractMin()
{
    int min = INT_MAX, minIndex;
    for (int i = 1; i <= v; i++)
    {
        if (prim[i].sptset == 'F' && prim[i].key < min)
        {
            min = prim[i].key;
            minIndex = i;
        }
    }
    return minIndex;
}
void prim1(int r)
{
    for (int i = 1; i <= v; i++)
    {
        prim[i].key = INT_MAX;
        prim[i].parent = 'N';
        prim[i].sptset = 'F';
    }
    prim[r].key = 0;
    for (int i = 1; i <= v; i++)
    {
        int u = extractMin();
        prim[u].sptset = 'T';
        for (int j = 1; j <= v; j++)
        {
            if (G[u][j] > 0 && prim[j].sptset == 'F' && prim[j].key > G[u][j])
            {
                prim[j].key = G[u][j];
                prim[j].parent = (char)(u + 64);
            }
        }
    }
}
void print()
{
    int wt = 0;
    printf("\nThe MST is-->\n");
    for (int i = 1; i <= v; i++)
    {
        if (i != v)
        {
            printf("%c-->%c, ", (char)(i + 64), prim[i].parent);
        }
        else
        {
            printf("%c-->%c. ", (char)(i + 64), prim[i].parent);
        }
        wt = wt + prim[i].key;
    }
    printf("\n\nWeight of the MST is--> %d", wt);
}
int main()
{
    char n;
    FILE *fp;
    fp = fopen("prims1.txt", "r");
    if (fp == NULL)
    {
        printf("Error to open the file!!!");
    }
    else
    {
        fscanf(fp, "%d", &v);
        for (int i = 1; i <= v; i++)
        {
            for (int j = 1; j <= v; j++)
            {
                fscanf(fp, "%d", &G[i][j]);
            }
        }
        fclose(fp);
        printf("Enter the number of vertices--> ");
        scanf("%d", &v);
        printf("\nEnter the starting vertex--> ");
        getchar();
        scanf("%c", &n);
        prim1((int)n - 64);
        print();
    }
    return 0;
}