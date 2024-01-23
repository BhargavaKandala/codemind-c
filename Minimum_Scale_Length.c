#include<stdio.h>
int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int chaingcd(int arr[], int n){
    int result = arr[0];
    for(int i = 0; i < n; i++){
        result = gcd(result , arr[i]);
    }
    return result;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int Max_length = chaingcd(arr , n);
    printf("%d", Max_length);
    
}