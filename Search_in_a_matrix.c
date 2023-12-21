#include<stdio.h>
int main()
{
	int n,i,j,k,flag=0;
	scanf("%d%d",&n,&k);
	int arr[n][k];
	for(i=0;i<n;i++)
	{for(j=0;j<k;j++)
	{
		scanf("%d",&arr[i][j]);
	}}
	int s;
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{for(j=0;j<k;j++)
	    if(s==arr[i][j])
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	printf("1");
	else
	printf("0");

}