#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int j = 0; j < n;j++){
        if(j % 2 == 1){
           sum += arr[j];
      }
   }
   printf("%d",sum);
}