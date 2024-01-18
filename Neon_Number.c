#include <stdio.h> 
int main()
  
 { 
  
int n;
scanf("%d",&n);
int s = n*n; 

int r; 
  int sum = 0; 
  while (s != 0) { 
 r =s % 10; 
 sum = sum + r; 
 s = s / 10; 
    } 
  if (sum == n) 
       printf("Neon Number") ;
    else
        printf("Not Neon Number");
}