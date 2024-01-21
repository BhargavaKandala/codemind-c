#include<stdio.h>
int isprime(int num){
    int count = 0;
    for(int i = 2; i <= num; i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 1){
        return 1;
    }
    return 0;
}

int nearprime(int num){
    int smaller = num - 1;
    int larger = num + 1;
    while(true){
        if(isprime(smaller)){
            return smaller;
        }
        else if(isprime(larger)){
            return larger;
        }
        else {
            smaller--;
            larger++;
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    
    for(int i = 0;i < t;i++){
        int n;
        scanf("%d",&n);
        if(isprime(n)){
            printf("%d
", n);
        }
        else{
        int result = nearprime(n);
        printf("%d
",result);
        }
    }
}

