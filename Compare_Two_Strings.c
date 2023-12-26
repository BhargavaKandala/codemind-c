#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    char arr2[100];
    fgets(arr ,100 ,stdin);
    fgets(arr2 ,100 ,stdin);
    
    if(strcmp(arr , arr2) == 0){
        printf("Strings are Equal");
    }
    else printf("Strings are not Equal");
}