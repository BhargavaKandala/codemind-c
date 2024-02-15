#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isvowel(char c){
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        return 1;
        
        default:
        return 0;
    }
}

int main()
{
    char str[200];
    fgets(str , sizeof(str) , stdin);
    
    int st = 0; 
    int n = strlen(str);
    int end = n - 1;
    
    while(st < end){
        if(isvowel(str[st]) && isvowel(str[end])){
            char temp = str[st];
            str[st] = str[end];
            str[end] = temp;
            
            st++;
            end--;
        }else if (!isvowel(str[st])) {
            st++;
        } else {
            end--;
        }
    }
    printf("%s", str);
    
    
}
