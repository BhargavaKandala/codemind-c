#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
       int x=n%i;
       if(x==0){
           printf("Not Prime");
           break;
       }
       else {
       printf("Prime");
       break;
    }
     }
}