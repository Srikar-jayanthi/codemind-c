#include <stdio.h>
int main(){
    int no,sum;
   
   scanf("%d",&no);
   sum=no%10;
   while(no>9){
      no=no/10;
   }
   sum=sum+no;
   printf("%d",sum);
   return 0;
}