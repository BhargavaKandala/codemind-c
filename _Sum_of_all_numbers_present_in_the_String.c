#include<stdio.h>
#include<string.h>
int main()
{
    int value = 0;
    char str[100];
    scanf("%[^
]" , str);
    
    for(int i=0; i < strlen(str) ; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            value += str[i] - '0';
        }
    }
    printf("%d" ,value);
}