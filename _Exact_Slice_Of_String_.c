#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char arr[200];
    fgets(arr , sizeof(arr) , stdin);
    
    int start, end;
    scanf("%d %d", &start , &end);

    for(int i = start; i <= end; i++){
        printf("%c", arr[i]);
    }
    
}