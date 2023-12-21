#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d%d",&n,&k);
	int arr[n][k];
	for(i=0;i<n;i++)
	{for(j=0;j<k;j++)
		scanf("%d",&arr[i][j]);
	}
int sum=0,summ=0;
	for(i=0;i<n;i++)
	{for(j=0;j<k;j++)
	if(arr[i][j]%2==0)
		sum=sum+arr[i][j];
		else if(arr[i][j]%2==1)
		summ=summ+arr[i][j];
		
	}
	
	printf("%d %d",sum,summ);
}