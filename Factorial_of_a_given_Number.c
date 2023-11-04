#include<stdio.h>
int main()
{
	int i=1,x,k=1;
	scanf("%d",&x);
	while(i<=x)
	{
		k=k*i;
		i++;
	}
	printf("%d",k);
}