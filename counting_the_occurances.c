#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    fgets(str , sizeof(str) , stdin);
    char c;
    scanf(" %c",&c);
    int count = 0;
    
    for(int i = 0; i < strlen(str)-1;i++){
        if(c == str[i]){
            count++;
        }
    }
    
    if(count!=0){
    printf("%d",count);
    }
    else printf("-1");
    
    return 0;
}




