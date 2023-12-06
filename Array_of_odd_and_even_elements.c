#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 1){
            printf("%d ",arr[i]);
        }//sorting odd elements
    }
     for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ",arr[i]);
        } //sorting even elements
    }
    
    
}