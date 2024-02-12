#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    while(n % 2 == 0){
        n /= 2;
    }
    
    while(n % 3 == 0){
        n /= 3;
    }
    while(n % 5 == 0){
        n /= 5;
    }
    
    if(n == 1){
        printf("Ugly Number");
    }
    else printf("Not Ugly Number");
    
}