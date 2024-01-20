#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        int n;
        scanf("%d",&n);
        int found = 1;
        for(int i = 1; i <= n ; i++){
            if(i * i == n){
                printf("True
");
                found = 0;
                break;
            }
        }
        if(found == 1){
            printf("False
");
        }
    }
}