#include<stdio.h>
#include<stdlib.h>
int main()
{
    char n1[110] , n2[110];
    
    scanf("%s", n1);
    scanf("%s" , n2);
    
    long long a = atoi(n1);
    long long b = atoi(n2);
    
    printf("%lld", a * b);
}