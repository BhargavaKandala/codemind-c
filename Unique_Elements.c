#include<stdio.h>
void printingUnique(int arr[], int num){
      
    for(int i = 0; i < num; i++){
        int j;
        for(j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                break;
            }
        }
        if(i == j){
            printf("%d ",arr[i]);
        }
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ;i < n ;i++){
        scanf("%d" ,&arr[i]);
    }
    
    printingUnique(arr , n);
}

