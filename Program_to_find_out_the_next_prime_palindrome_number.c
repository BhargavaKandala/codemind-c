#include<stdio.h>
int isprime(int num){
    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        return 1;
    }
    return 0;
}

int palindrome(int num){
    int remain,reverse = 0;
    int temp = num;
    while(num != 0){
        remain = num % 10;
        reverse = reverse * 10 + remain;
        num /= 10;
    }
    if(temp == reverse){
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n +1; ;i++){
       if(isprime(i) && palindrome(i)){
           printf("%d", i);
           break;
       }
    }
    
}
