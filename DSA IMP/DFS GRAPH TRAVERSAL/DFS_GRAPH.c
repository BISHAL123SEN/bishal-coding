#include<stdio.h>
#include<stdlib.h>
int arr[6][6];
int n;

void readGraph() //scan the graph
{
	FILE *fp;
	fp=fopen("adjacent1.txt","r");//read from file
	if(fp==NULL)
	{
		printf("File open failed..");
		return;
	}
	fscanf(fp,"%d",&n);
	int i,j; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			fscanf(fp,"%d",&arr[i][j]);
	}
	fclose(fp);
}

int showGraph()//print the graph
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%5d\t",arr[i][j]);
		printf("\n");
	}
}