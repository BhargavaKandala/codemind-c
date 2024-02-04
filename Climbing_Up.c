#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    if(x % y == 0)
        printf("%d",y);
        else printf("%d", x % y + x / y);
}