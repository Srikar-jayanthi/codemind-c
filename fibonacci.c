#include <stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d %d ",a,b);
       for(i=2;i<n;i++)
       {
          
       c=a+b;
        printf("%d ",c);
       a=b;
      b=c;}
}