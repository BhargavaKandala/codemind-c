#include<stdio.h>
int main()
{
    int n, min =0 , max = 0, count = 0;
    scanf("%d",&n);
    
    int arr[n];//inpt array elements
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0 ; i < n/2; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;//getting count of the number in the array 
            }
        }
        if(arr[i] == count){//getting the 
            if(min == 0 || min > arr[i]){
                min = arr[i];
            }
            if(max == 0 || max < arr[i]){
                max = arr[i];
            }
        }
    }
    if(min == 0 && max ==0){
        printf("-1");
    }
    else printf("%d %d", min ,max);
 
 
 
    
}