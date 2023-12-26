#include<stdio.h>
#include<string.h>
int main()
{
    char arr[60];
    fgets(arr , 60 , stdin);
    
    printf("%s" , arr);
}