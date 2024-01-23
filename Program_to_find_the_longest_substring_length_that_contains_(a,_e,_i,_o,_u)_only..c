#include<stdio.h>
#include<string.h>
int isVowel (char ch){
    if(ch == 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    return 0;
}


int main()
{
    char str[1000];
    fgets(str,  sizeof(str) , stdin);
    
    int found = 0 , count = 0;
    for(int i = 0; i < strlen(str) - 1 ; i++){
        if(isVowel(str[i])){
            found++;
            count = (count > found) ? count : found;
        }
        else {
            found = 0;
        }
    }
    printf("%d", count);
}