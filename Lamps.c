#include <stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    
    if(n==k)
    printf("%d",n*x);
    else if(n>=k && x>=y)
    printf("%d",k*x+(n-k)*y);
    else if(n>=k && x<=y)
    printf("%d",k*x + (n-k)*x);
}