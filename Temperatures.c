#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < n ; i++){
        int currentelement = arr[i];
        int found = 0;
        
        for(int j = i+1; j < n; j++){
            if(currentelement < arr[j]){
                printf("%d ",j - i);
                found = 1;
                break;
            }
        }
       if(!found){
           printf("0 ");
       }
    }
    return 0;
}
