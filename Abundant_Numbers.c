#include<stdio.h>
int main()
{
    int i,n,b=1;
    scanf("%d",&n);
    for(i=1;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            b=b*i;
        }
       
    }
    
    if(b>n)
    printf("True");
    else
    printf("False");
}