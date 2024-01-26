#include<stdio.h>
int main()
{
    char arr[10];
   fgets(arr ,sizeof(arr) ,stdin);
    printf("%c",arr[6]);
}