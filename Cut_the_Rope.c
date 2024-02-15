#include<stdio.h>
int main()
{
    int n,x,c;
    scanf("%d%d",&n,&x);
    c=n-x;
    if(x%2==0&&c%2==0)
    printf("YES");
    else if(x%2==1&&c%2==1)
    printf("YES");
    else if(x%2==1&&c%2==0)
    printf("YES");
    else
    printf("NO");
}