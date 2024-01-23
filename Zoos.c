#include<stdio.h>
#include<string.h>
int main()
{
    char arr[1000];
    fgets(arr , sizeof(arr) , stdin);
    
    int x = 0, y = 0;
    
    for(int i = 0; i < strlen(arr) - 1; i++){
        if(arr[i] == 'z'){
            x++;
        }else {
            y++;
        }
    }
    if(2 * x == y){
        printf("Yes");
    }
    else printf("No");
    
}