#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]" , str);
    int count = 0;
    
    for(int i = 0; i < strlen(str); i++){
        count ++;   
    }
    printf("%d",count);
}