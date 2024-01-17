#include<stdio.h>
#include<math.h>

int main(){
    int num , x;
    scanf("%d%d", &num, &x);
    
    int numDigi = log10(num) + 1;
    int divisor = pow(10, numDigi - x);
    int firstxdigi = num / divisor;
    int lastxdigi = num % (int)pow(10 , x);
    
    int diff = abs(firstxdigi - lastxdigi);
    printf("%d" , diff);
}