#include <stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    int arr[n];
 
    
    for( i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    
    for( i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            sum+=arr[i];        
        }
    }
    printf("%d",sum);
    
}