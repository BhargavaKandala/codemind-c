#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int a=1500-y*4-((x+y)*2);
    int b=1500-x*2-((x+y)*4);
    
    if(a>b){
        printf("%d",a);
    }
    else printf("%d",b);
}