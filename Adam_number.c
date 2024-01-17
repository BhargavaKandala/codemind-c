#include<stdio.h>
#include<math.h>
int reversed(int num){
  int rev = 0;
    while(num != 0){
        int x = num %10;
        rev = rev*10 + x;
        num = num / 10;
    }
   return rev;
}


int main()
{
    int n;
    scanf("%d",&n);
    
    int rev = 0;
    int temp = n;
    while(n != 0){
        int x = n %10;
        rev = rev*10 + x;
        n = n/10;
    }
    
    int squareN = temp * temp;
    int sqrev = rev * rev;
    if(squareN == reversed(sqrev)){
        printf("True");
    }
    else{
        printf("False");
    }
    
}


