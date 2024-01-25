#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    int result = (a*b)/(a+b);
    printf("%d",result);
}