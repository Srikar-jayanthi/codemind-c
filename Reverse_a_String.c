#include<stdio.h> 
int main() 
{
     char arr[30],s1[10],s2[10],s3[10]; 
    int i=0,j,len=0; 
            scanf(" %[^
]s",s1); 
            while(s1[i]!=NULL) 
              { 
                len=len+1; 
                i++ ; 
            } 
            for(i=len-1;i>=0;i--) 
            { 
                printf("%c",s1[i]); 
            } 
}