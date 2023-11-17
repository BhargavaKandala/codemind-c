#include <stdio.h>
int main()
{
    int a,b,x,y,c,d;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    
    if(a/x==0){
        c=a/x;
    }
    else{
        c=(a/x)+1;
    }
    if(b/y==0){
        d=b/y;
    }
    else{
        d=(b/y)+1;
    }
    if(c>d){
        printf("Jesse");
    }
    else if(d>c){
        printf("Walter");
    }
    else if(a<b){
        printf("Walter");
    }
    else if(b<a){
        printf("Jesse");
    }
    else printf("Both");
    
}