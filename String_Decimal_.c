#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    
    for(int i = 0; i < n; i++){
        
    char arr[200];
    fgets(arr , sizeof(arr) , stdin);
    
    int allDigits = 1;
    for(int i = 0; i < strlen(arr); i++){
        if(!isdigit((unsigned char)arr[i]) && arr[i] != '
'){
            allDigits = 0;
            break;
        }   
    }
    if(allDigits == 1){
        printf("True
");
    }
    else printf("False
");
    
    }
}