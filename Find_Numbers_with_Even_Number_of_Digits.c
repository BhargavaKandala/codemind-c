#include<stdio.h>
int evencount(int num){
    int count = 0;
    
    while(num != 0){
        num = num / 10;
        count++;
    }
    
    if(count % 2 == 0){
        return 1;
    }
    return 0;
}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int count = 0;
    for(int i = 0; i < n; i++){
        if(evencount(arr[i])){
            count++;
        }
    }
    printf("%d", count);
    
    
}