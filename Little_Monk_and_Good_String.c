#include<stdio.h>
#include<string.h>

char isvowel(char c){
  return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
         c=='A'|| c=='E'||c=='I'||c=='O'||c=='U');
}

int maxsub(char *str){
    int maxlength = 0;
    int currentlength = 0;
    int len = strlen(str);
    for(int i =0; i < len; i++){
        if(isvowel(str[i])){
            currentlength ++;
        }
        else{
            maxlength = (currentlength > maxlength) ? currentlength : maxlength;
            currentlength = 0;
        }
    }
    maxlength = (currentlength > maxlength) ? currentlength : maxlength;
    return maxlength;
}



int main()
{
    char n[1000];
    fgets(n , sizeof(n),stdin);
    
    int length = maxsub(n);
    printf("%d",length);
    
    return 0;
}