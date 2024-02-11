#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    for(int k = 0; k < t; k++){
        int n;
        scanf("%d", &n);
        
        int arr[n];
        int sum = 0;
        
        for(int i = 0 ; i < n-1 ; i++){
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        
        int actual = (n *(n + 1))/2;
        printf("%d
", actual - sum);
    }
}



