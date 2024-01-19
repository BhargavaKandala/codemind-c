#include<stdio.h>

int iseven(int num){
    while(num != 0){
        int remain = num %10;
        if(remain % 2 != 0){
            return 0;
        }
        num /= 10;
    }
    return 1;
}

int isodd(int num){
    while(num != 0){
        int remain = num %10;
        if(remain % 2 != 1){
            return 0;
        }
        num /= 10; 
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d" , &n);
    
    if(iseven(n)){
        printf("Even");
    }
    else if(isodd(n)){
        printf("Odd");
    }
    else printf("Mixed");
    
}