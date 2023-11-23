#include<stdio.h>
int main()
{
    int i,n,r,ds=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        ds=ds+r;
        p=p*r;
    }
    if(ds==p)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}