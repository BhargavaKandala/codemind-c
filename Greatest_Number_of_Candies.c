#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int extra;
    scanf("%d", &extra);
    int max = arr[0];
    
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
        max = arr[i];
        }
    }
        
    
    for(int i = 0; i < n; i++){
        if(arr[i] + extra >= max){
            printf("True ");
        }
        else printf("False ");
    }
    
}