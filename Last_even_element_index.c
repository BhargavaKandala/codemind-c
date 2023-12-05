#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int even = arr[0];
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
  
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even = i;
        }
    }
    printf("%d",even);
}