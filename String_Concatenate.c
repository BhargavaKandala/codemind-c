#include<stdio.h>
#include<string.h>
void alphaorder(char *str){
    int len = strlen(str);
    
    for(int i = 0 ; i < len ; i++){
        
        for(int j =0 ;j < len-i-1 ; j++){
             if(str[j] > str[j+1]){
            int temp = str[j];
            str[j] = str[j+1];
            str[j+1] = temp;
            }
        }
    }
}

int main()
{
    char str[200];
    fgets(str , sizeof(str) , stdin);
    
    char str2[200];
    fgets(str2 , sizeof(str2) , stdin);
    
    str[strcspn(str, "
")] = NULL;
    str2[strcspn(str2, "
")] = NULL;
    
    strcat(str,str2);
        alphaorder(str);
    printf("%s",str);
    
}