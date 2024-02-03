#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d %d", &h ,&m);
    
    if(h * 60 + m != 24 * 60){
        printf("%d", 24*60 - (h * 60+ m));
    }
    
}