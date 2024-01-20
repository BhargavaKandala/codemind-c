#include<stdio.h>
int isprime(int num){
    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && isprime(i)){
           count++;
        }
    }
    printf("%d",count);
}


