#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    fgets(string , sizeof(string) , stdin);

    int flag ;
    char c;
    scanf(" %c" , &c);
    
    for(int i = 0; i < strlen(string) - 1; i++){
        if(c == string[i]){
        printf("True
");
        printf("%d " , i);
        flag = 0;
        break;
        }
    }
    
    if(flag != 0){
        printf("False");
    }
    return 0;
}

