#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    fgets(string , sizeof(string), stdin);
    
    int count = 0;
    for(int i = 0; i < strlen(string)-1; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            count++;
        }
    }
    printf("%d",count);
}