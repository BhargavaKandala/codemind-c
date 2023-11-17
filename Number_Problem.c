#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    
    int diff=abs(a-b);
    int x=diff/10;
    int y=x+1;
    
    if(diff%10==0){
        printf("%d",x);
    }
    else printf("%d",y);
    
}