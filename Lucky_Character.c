#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    fgets(str ,sizeof(str) , stdin);
    printf("%c" , str[6]);
}