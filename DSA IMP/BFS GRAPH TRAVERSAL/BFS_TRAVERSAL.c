#include<stdio.h>
#include "BFS_GRAPH.c"
int front=-1,rear=-1;
int q[10],visited[10];

int isEMPTY(){
    if(front==rear)
        return 1;
    else
        return 0;
}

void insert(int item){
    rear=rear+1;
    q[rear]=item;
}
int delete(){
    front=front+1;
    return q[front];
}
void BFS(int v)
{
	int u,j;
	for(u=0;u<=n-1;u++)
		visited[u]=0;
	insert(v);
	visited[v]=1;
	while(!isEMPTY())
	{
		u=delete();
		printf("%5c",u+'A');
		for(j=0;j<n;j++)
		{
			if(arr[u][j]==1) //adjacency checking 
			{
				if(visited[j]==0)
				{
					insert(j);
					visited[j]=1;
				}
			}
		}
	}
	printf("\n");
}

int main()
{
    readGraph(); 
    showGraph();
    int v;
	printf("Enter start vertex: ");
	scanf("%d",&v);
	printf("BFS TRAVERSAL OF THE GRAPH IS::\n");
	BFS(v);

return 0;
}