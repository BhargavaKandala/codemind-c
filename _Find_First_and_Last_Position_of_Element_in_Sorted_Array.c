#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int target;
    scanf("%d",&target);
    int found = 0;
    
    
    for(int i = 0; i < n; i++){
        if(target == arr[i]){
            printf("%d ", i);
            found = 1;
            break;
        }
    }
    
    if(found){
    for(int i = n-1; i >= 0; i--){
        if(target == arr[i]){
            printf("%d ", i);
            found = 1;
            break;
            }
        }
    }
    
    
    if(!found){
        printf("-1 -1");
    }
}