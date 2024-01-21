#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    
    for(int i = 0; i < n ;i++){
        if(arr[i] != 0){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                arr[i] = arr[j] = 0;
                count++;
                break;
               }
            }
        }
    }
    printf("%d", count);
    
    return 0;
}