#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int count = 0;
    
    for(int i =1; i <= n; i++){
        int divisors = 0 ;
        for(int j = 1 ; j <= i; j++){
            if(i % j == 0){
                divisors++;
            }
        }
        if(divisors == 9){
            printf("%d ",i);
            count++;
        }
    }
    printf("
");
    printf("Total=%d
", count);
   
    
    
}