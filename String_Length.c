#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    fgets(string , sizeof(string) , stdin);
    
    int len = strlen(string);
    printf("%d",len -1);
}