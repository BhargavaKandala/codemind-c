#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("HUGE");
    }
    else if(n==2){
        printf("SMALL");
    }
    
    else if(n%3==0){
        printf("NORMAL");
    }
    else if(n%3==1){
        printf("HUGE");
    }
    else if(n%3==2){
        printf("SMALL");
    }
}