#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d" ,&n);
    for(int j = 0; j < n; j++){
        
    char str[100];
    scanf(" %[^
]" , str);
    int flag = 0;
    
    for(int i = 0; i < strlen(str) ; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            flag = 1;
            break;
        }
    }
    printf("%s
" ,flag == 0 ? "No" : "Yes");
    }
   
}