#include <stdio.h>
#include "bfs_graph.c"

int front = -1;
int rear = -1;
int visited[10],queue[10];
int isempty()
{
    if(front==rear)
        return 1;
    else
        return 0;

}

void insert(int ele)
{
    rear=rear+1;
    queue[rear]=ele;

} 

int delete()
{
    front=front+1;
    return  queue[front];
}
 
void bfs(int v)
{
    int u,j;

    for(u=0;u<=n-1;u++)
    {
        visited[u]=0;
    }
    insert(v);
    visited[v]=1;
    while(!isempty())
    {
        u=delete();
        printf(" %5c ", u+'A');
        for(j=0;j<n;j++)
        {
            if(arr[u][j]==1) 
            {
                if(visited[j]==0)
                {
                    insert(j);
                    visited[j]=1;
                }
            }
        }
    }
    //printf("\n");
}

int main()
{ 
    int v;
    readgraph();
    printgraph();
    printf("ENTER THE VERTICES OF THE GRAPH::\n");
    scanf("%d",&v);
    printf("TRAVERSAL OF THE GRAPH IS::\n");
    bfs(v);



    return 0;
}