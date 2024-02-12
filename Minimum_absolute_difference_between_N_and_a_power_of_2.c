#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int power = 1;
    int minDiff = abs(n - power);
    
    while(power < INT_MAX / 2){
        power *= 2;
        minDiff = (abs(power - n) < minDiff) ? abs(power - n) : minDiff;
    }
    printf("%d", minDiff);
    
}