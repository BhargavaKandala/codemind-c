#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    fgets(string , sizeof(string) , stdin);
    
    int count = 0;
    for(int i = 0; i < strlen(string)-1; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            count++;
        }
    }
    printf("%d", count);
}
