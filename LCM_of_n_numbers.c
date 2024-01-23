#include<stdio.h>
int gcd(int a , int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findlcm (int a, int b){
    return (a * b)/gcd(a,b);   
}

int lcm_array(int *arr , int n){
    int lcm = arr[0];
    
    for(int i = 1; i < n; i++){
        lcm = findlcm(lcm , arr[i]);
    }
    return lcm;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d" , &arr[i]);
    }
    
    int result = lcm_array(arr , n);
    printf("%d", result);
    
}