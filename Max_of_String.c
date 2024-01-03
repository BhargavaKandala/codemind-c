#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]" , str);
    int value = str[0];
    
    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= value){
            value = str[i];
        }
    }
    printf("%c" , value);
}