#include <stdio.h>
#include "DFS_GRAPH.c"
int top = -1;
int visited[10], stack[10];

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int ele)
{
    top=top+1;
    stack[top] = ele;
}

int pop()
{
    return stack[top--];
}

void DFS(int v)
{
    int u, j;
    for (u = 0; u < n; u++)
    {
        visited[u] = 0;
    }
     visited[v] = 1;
     push(v);
   

    while (!isEmpty())
    {
        u = pop();
        printf(" %c ", u + 'A');
        for (j = 0; j < n; j++)
        {

            if (arr[u][j] == 1)
            {
                if (visited[j] == 0)
                {
                    visited[j] = 1;
                    push(j);
                    
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
    printf("ENTER THE NUMBER OF VERTICES::\n");
    scanf("%d", &v);
    printf("THE DFS TRAVERSAL OF THE GRAPH IS ::\n");
    DFS(v);

    return 0;
}