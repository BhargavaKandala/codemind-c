#include<stdio.h>
int main(){
    
    int n,i;
    float sum=0.0,avg;
    scanf("%d",&n);
    int arr[n];
    
    for( i=0 ;i<n ; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
     avg = sum / n;
    printf("%.2f",avg);
    
    
    
}