#include<stdio.h>
int main()
{
    int arr[3] , arr2[3];
    for(int i = 0 ;i < 3;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ;i < 3;i++){
        scanf("%d",&arr2[i]);
    }
    
    int Alice = 0 , Bob = 0;
    
    for(int i = 0; i < 3; i++){
        if(arr[i] == arr2[i]){
            continue;
        }
        else if(arr[i] > arr2[i]){
            Alice++;
        }
        else if(arr[i] < arr2[i]){
            Bob++;
        }
    }
    
    printf("%d %d",Alice , Bob);
}