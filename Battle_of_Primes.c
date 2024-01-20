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
    int n1 , n2 , n3;
    scanf("%d%d",&n1,&n2);
    int count = n1 + n2 + n3;
    
    for(n3 = 1; ; n3++ ){
        count = n1 + n2 + n3;

        if(isprime(count)){
            printf("%d" , n3);
            break;
        }
    }
   
}