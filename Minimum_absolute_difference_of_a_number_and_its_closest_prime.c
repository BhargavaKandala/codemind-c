#include<stdio.h>
#include<math.h>

int prime(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int closestprime(int num){
    int lower = num - 1;
    int upper = num + 1;
    
    while(1){
        if(prime(num)){
            return num;
        }
        if(prime(lower)){
            return lower;
        }
        if(prime(upper)){
            return upper;
        }
        lower-- ;
        upper++ ;
    }    
}

int absolute(int n){
    int closest = closestprime(n);
    return (closest > n) ? closest - n : n - closest;
}


int main()
{
    int n;
    scanf("%d", &n);
    
    int diff = absolute(n);
    printf("%d", diff);
    
}

