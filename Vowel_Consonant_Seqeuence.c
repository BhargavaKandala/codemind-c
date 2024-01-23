#include<stdio.h>
#include<string.h>
int isVowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    return 0;
}

int main()
{
    char str[1000];
    scanf("%[^
]", str);
    
    int con_c = 0, vowel_v = 0;
    
    for(int i = 0; i < strlen(str) ; i++){
        if(isVowel(str[i])) {
            
           vowel_v ++ ;
           con_c = 0;
           
           if(vowel_v == 1) {
               printf("%c", 'V');
           }else {
               continue;
           }
           
        }else {
            
            con_c++ ;
           vowel_v = 0;
           
           if(con_c == 1){
               printf("%c", 'C');
           }else {
               continue;
           }
        }
    }   
}