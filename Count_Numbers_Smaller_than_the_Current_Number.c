#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int result[n];
    for(int i = 0; i < n; i++){
        int count = 0;
        
        for(int j = 0; j < n; j++){
            if(i != j && arr[j] < arr[i]){
                count++;              
            }
        }
        result[i] = count;
    }
         
    for(int i = 0; i < n; i++){
        printf("%d ", result[i]);
    }
    
    
}