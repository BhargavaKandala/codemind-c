#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int z=21-a-b;
    if(a+b+z==21 && z<=10){
        printf("%d",z);
    }
    else if(a+b+z!=21){
        printf("-1");
    }
    else printf("-1");
}