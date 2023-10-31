#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int total=52;
    int discard=0;
    if(n>0){
        int cardsperplayer=total/n;
        discard=total-(cardsperplayer*n);
    }
    printf("%d",discard);
    
}