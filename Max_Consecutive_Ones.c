#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
    
    
    int count = 0;
    int maxcount = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            maxcount = (count > maxcount) ? count : maxcount;
            count = 0;
        }  
        else{
            count++;
        }
    }
       maxcount = (count > maxcount) ? count : maxcount;
       printf("%d" , maxcount);
}