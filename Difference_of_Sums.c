#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d=n*(n+1)*(2*n + 1)/6;
    int bha=pow(n*(n+1)/2,2);
    int ma=abs(bha-d);
    printf("%d",ma);
}