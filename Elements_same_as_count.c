#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n] ,flag = 0;
    for(int i= 0 ;i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < n/2; i++){
         int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == arr[i]){
            printf("%d ",arr[i]);
            arr[i] =0;
            flag = 1;
        }
    }
    if(flag != 1){
        printf("-1");
    }
     
    
}