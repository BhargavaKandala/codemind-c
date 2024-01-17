#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d" ,&n);
    if(sqrt(n) == (int)sqrt(n)){
        printf("True");
    }
    else printf("False");
}