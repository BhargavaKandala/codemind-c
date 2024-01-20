#include<stdio.h>
int addingdigits(int num){
    while(num >= 10){
        int sum = 0;
        
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main()
{
    int n;
    scanf("%d" , &n);
    
    int result = addingdigits(n);
    printf("%d", result);
}


