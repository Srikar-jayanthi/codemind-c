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
    int c=0;
    for(i=0;i<n;i++)
    {
        if(i%2==1&&arr[i]%2==0)
        {
            c++;
        }
    }
    if(c>=1)
    {
    printf("False");
    }
    else
    {
        printf("True");
}
}