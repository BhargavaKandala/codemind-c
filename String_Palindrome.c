#include<stdio.h>
#include<string.h>
void strrev(char *arr){
    int len = strlen(arr);
    int start = 0;
    int end = len-1;
    
    while(start < end){
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start ++ ;
        end--;
    }
}

int main()
{
    char string[100];
    fgets(string, sizeof(string) , stdin);
    
     string[strcspn(string, "
")] = NULL;
    
    char string2[100];
    strcpy(string2 ,string);
    strrev(string2);
    
    if(strcmp(string , string2) == 0){
         printf("Palindrome");
    }
    else{
      printf("Not Palindrome");
    }
    return 0;
}


