#include<stdio.h>
int is_odd(int num){
    if(num % 2 == 1){
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int count = 0;
    
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(is_odd(i+j)){
                count++;
            }
        }
    }
    printf("%d",count);
}