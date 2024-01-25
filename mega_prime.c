#include<stdio.h>
int prime(int num){
    if(num == 1){
        return 0;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i ==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    if(prime(n) == 0){
        printf("Not Mega Prime");
    }
    else{
        if(prime(n)){
            int found = 1;
            while(n > 0){
                int p = n % 10;
                if(prime(p) == 0){
                    found = 0;
                    break;
                }
                n = n/10;
            }
            if(found){
                printf("Mega Prime");
            }
            else printf("Not Mega Prime");
        }
    }
    
}