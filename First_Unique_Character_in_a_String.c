#include<stdio.h>
#include<string.h>
int function(char *str){
    int count[256] = {0};
    
    for(int i = 0 ; i < strlen(str); i++){
        count[str[i]]++;
    }
    for(int i = 0 ; i < strlen(str) ; i++){
        if(count[str[i]] == 1){
            return i;
        }
    }
    
    return -1;
}


int main(){
    char str[1001];
    scanf("%s",  str);
    
    int counter = function(str);
    if(counter != -1){
        printf("%d" , counter);
    }
    else printf("-1");
}

