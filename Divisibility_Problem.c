#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i=0;
    if(a%b==0){
        printf("0");
    }
    else{
      while(a%b!=0){
         i=i+1;
         a=a+1;
      }
    printf("%d",i);
    }
}