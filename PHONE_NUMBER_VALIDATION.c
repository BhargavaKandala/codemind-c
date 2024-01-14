#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    fgets(str , sizeof(str) , stdin);
    
   if(strlen(str)-1 == 10){
       if(str[0] != '0'){
           printf("Valid");
       }
       else printf("Invalid");
   }
   else printf("Invalid");
   
}