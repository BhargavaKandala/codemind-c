#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    int odd = arr[1];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1){
            odd = arr[i];
        }
    }
    printf("%d",odd);
    
    
}