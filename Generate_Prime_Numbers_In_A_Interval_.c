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


int main()
{
    int a,b;
    scanf("%d%d" , &a, &b);
    for(int i = a; i <= b; i++){
        if(isprime(i)){
            printf("%d
",i);
        }
    }
}
