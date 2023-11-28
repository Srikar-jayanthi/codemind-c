#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    if(x<=10000)
    printf("%.2f",(x+((80*x)/100)+((20*x)/100)));
    else if(x<=20000)
    printf("%.2f",(x+((90*x)/100)+((25*x)/100)));
    else if(x>20000)
    printf("%.2f",(x+((95*x)/100)+((30*x)/100)));
    
    
}