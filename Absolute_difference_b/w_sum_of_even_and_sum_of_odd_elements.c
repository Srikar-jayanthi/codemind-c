#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
int sum=0,k=0;
	for(i=0;i<n;i++)
	{if(arr[i]%2==0)
		sum=sum+arr[i];
		else
		k=k+arr[i];
		
	}
	
	if(k>sum)
	printf("%d",k-sum);
	else
	printf("%d",sum-k);
}