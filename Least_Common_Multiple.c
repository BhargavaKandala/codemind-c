#include <stdio.h>
#include <math.h>
int main()
{
    long long a,b,hcf,lcm;
    scanf("%lld%lld",&a,&b);
    int mx;
    if(a>b){
        mx = a;
    }
    else{
        mx = b;
    }
    
     for (int i=mx;i>=1;i--){
        if(a%i==0 && b%i==0){
        hcf=i;
        break;
        }
    }
    long long k  = a*b;
        lcm = k/hcf;

    // lcm=(a*b)/hcf;
    printf("%lld ",lcm);
}