#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, pro = 1, temp = n;
    
    
    while(n != 0){
        int remain = n % 10;
        sum = sum + remain;
        n = n / 10;
    }
    
        n = temp;
        
     while(n != 0){
        int remain = n % 10;
        pro = pro * remain;
        n = n / 10;
    }
    
    int result = pro - sum;
    printf("%d",result);
    
    
}

