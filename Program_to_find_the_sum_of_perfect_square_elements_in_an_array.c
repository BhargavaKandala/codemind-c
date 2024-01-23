#include<stdio.h>
int Is_square(int num){
    for(int i = 1; i <= num; i++){
        if(i * i == num){
            return 1;
        }
    }
    return 0;
}

int Square_Sum(int arr[] , int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(Is_square(arr[i])){
        sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    
    int result = Square_Sum(arr , n);
    printf("%d", result);
    
    
}

