#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    fgets(str ,sizeof(str), stdin);
    
    int count = 1;
    int con = 0;
    int n = strlen(str);
    
    for(int i = 0; i < n; i++){
        if(str[i] == str[i - 1]){
            count++;
        }
        else{
            con =(con > count) ? con : count;
            count = 1;
        }   
    }
    con = (con > count) ? con : count;
    printf("%d", con);
    
}