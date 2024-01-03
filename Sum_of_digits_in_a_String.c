#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int sum = 0;    
    
    scanf("%[^
]" , str );
    for(int i = 0 ; i < strlen(str); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            sum += str[i] - '0';
        }
    }
    printf("%d" ,sum );
}