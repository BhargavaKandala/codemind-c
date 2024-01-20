#include<stdio.h>
int factorial(int num) {
    int result = 1;
    while (num != 0) {
        result *= num;
        num--;
    }
    return result;
}
int main(){
    int testcases;
    scanf("%d", &testcases);
    for(int i = 1; i <= testcases; i++){
         int num;
         scanf("%d", &num);
         int sum = 0;
    int remain;
    int temp = num;
    while(num != 0){
        remain = num % 10;
        sum = sum + factorial(remain);
        num /= 10;
    }
    if(temp == sum){
        printf("Strong
");
    }
    else printf("Not Strong
");
    }
   
}

