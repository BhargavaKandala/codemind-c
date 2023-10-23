#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    
    if(n%2==0 || m%2==0){
        printf("Player 1");
    }
    else if(n%2==1 || m%2==1){
        printf("Player 2");
    }
    else printf("There's no move to make");
}