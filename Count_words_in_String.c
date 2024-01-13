#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    fgets(string , sizeof(string), stdin);
    int words = 0;
    
    for(int i = 0 ; i < strlen(string); i++){
        if(string[i] == ' ' || string[i] == '
'){
            words++;
        }
    }
    printf("%d",words);
}