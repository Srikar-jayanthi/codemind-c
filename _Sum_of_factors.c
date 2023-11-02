#include<stdio.h>
int main()
{
    int i,n,b=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {if(n%i==0)
      {b=b+i;}
    }
    printf("%d ",b-n);
}