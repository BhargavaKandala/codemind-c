#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    
    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        scanf("%d" ,&arr[i]);
    }
    
    int max = arr[0];
    int temp;
    for(int i = 0; i<n; i++){
    	temp = arr[i];
        if(temp > max){
            max = temp;
        }
    }
    
    printf("%d", max);
    
}