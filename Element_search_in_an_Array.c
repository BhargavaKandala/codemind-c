#include<stdio.h>
int main(){
    int n,element;
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&element);
    int found = 0;
    for(int i=0 ; i < n; i++){
        if(arr[i]==element){
            found = 1;
            break;
        }
    }
    if(found){
        printf("True");
    }
    else printf("False");
    
}