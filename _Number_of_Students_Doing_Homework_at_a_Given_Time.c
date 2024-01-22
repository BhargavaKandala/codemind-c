#include<stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int n1;
    scanf("%d", &n1);
    int arr2[n1];
     for(int i = 0; i < n1; i++){
        scanf("%d", &arr2[i]);
    }
    
    int target;
    scanf("%d", &target);
    
    int count = 0;
    for(int i = 0 ;i < n || i < n1; i++){
        if(arr[i] <= target && arr2[i]  >= target){
            count++;
        }
    }
    printf("%d" , count);
    
    
    
}