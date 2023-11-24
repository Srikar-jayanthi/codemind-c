#include<stdio.h>
int main()
{
 int i,x,k=0,l=0 ,sum=0;
 scanf("%d",&x);
 for(i=1;i<=x;i++)
 {
     k=i*i;
     l=l+(i*i);
     sum=sum+i;
    
 }
 printf("%d",(sum*sum)-l);
}