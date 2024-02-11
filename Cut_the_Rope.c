#include<stdio.h>
int cutrope(int n, int x){
    if(n < x){
        return 0;
    }
    if(n % 2 == 1 && x % 2 == 0){
        return 0;
    }
    if(n == x || x == 0){
        return 1;
    }
    return cutrope(n/2,x) || cutrope(n/2,x-n/2) ||cutrope(n-1,x) ;
} 


int main()
{
    int n,x;
    scanf("%d%d", &n, &x);
    if(cutrope(n,x)){
        printf("YES");
    }    
    else printf("NO");
    return 0;
}




