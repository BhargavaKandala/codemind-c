#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    
    int counter = 0;
    float sum = 0.0; 
    
    for(int i = 0; i < n; i++){
        int count = 1;
        
        for(int j = i+1; j < n ;j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = 0;
            }
        }
        
        if(count == arr[i]){
            counter++;
            sum += arr[i];
        }
    }
    
    if(counter == 0){
        printf("-1");
    }
    else printf("%.2f" , sum / counter );
    
    return 0;
}
