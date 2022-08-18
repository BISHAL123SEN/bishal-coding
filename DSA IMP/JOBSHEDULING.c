#include <stdio.h>
typedef struct item{
	int deadline;
	int profit;
}Item;
int n;
Item job[30];
int min(int a,int b){
	if(a>=b){
		return b;
	}
	else{
		return a;
	}
} 
void merge(int h,int l)
{
	int mid=(h+l)/2;
	int i=l,j=mid+1,k=l;
	int c[n+1],d[n+1];
	while(i<=mid && j<=h)
	{
		if(job[i].profit>=job[j].profit)
		{
			c[k]=job[i].deadline;
			d[k++]=job[i++].profit;
		}
		else
		{
			c[k]=job[j].deadline;
			d[k++]=job[j++].profit;
		}
	}
	while(i<=mid){
		c[k]=job[i].deadline;
		d[k++]=job[i++].profit;
	}
	while(j<=h){
		c[k]=job[j].deadline;
		d[k++]=job[j++].profit;
	}
	for(i=l;i<=h;i++){
		job[i].deadline=c[i];
		job[i].profit=d[i];
	}
}
void merge_sort(int low,int high)
{
	if(high>low)
	{
		int mid=(high+low)/2;
		merge_sort(low,mid);
		merge_sort(mid+1,high);
		merge(high,low);
	}
}
void job_sc(){
	int tp=0;
	int slot[n+1],i,j;
	for(i=1;i<=n;i++){
		slot[i]=0;
	}
	printf("\n");
	for(i=1;i<=n;i++){
		printf("%d ",slot[i]);
	}
	for(i=1;i<=n;i++){
		for(j=min(n,job[i].deadline);j>=1;j--){
			if(slot[j]==0){
				slot[j]=i;
				break;
			}
		}
	}
	printf("\n");
	for(i=1;i<=n;i++){
		printf("%d ",slot[i]);
	}
	for(i=1;i<=n;i++){
		tp=tp+job[slot[i]].profit;
	}
	printf("\n%d",tp);
}
int main(){
	int i;
	printf("enter the number of jobs:\n");
	scanf("%d",&n);
	printf("enter the profits:\n");
	for(i=1;i<=n;i++){
		scanf("%d",&job[i].profit);
	}
	printf("enter the deadlines:\n");
	for(i=1;i<=n;i++){
		scanf("%d",&job[i].deadline);
	}
	merge_sort(1,n);
	for(i=1;i<=n;i++){
		printf("%d ",job[i].profit);
	}
	printf("\n");
	for(i=1;i<=n;i++){
		printf("%d ",job[i].deadline);
	}
	job_sc();
	
}
