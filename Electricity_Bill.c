#include <stdio.h>
int main(){
    float a;
    scanf("%f", &a);
    float bill, sch, amnt;
     sch = 15.0/100.0 * bill;
      amnt = sch + bill;
    if(a<=199.0){
        printf("Units Consumed: %.0f
", a);
        printf("Cost per Unit: %.2f
", 1.20);
        bill = a*1.20;
        printf("Bill: %.2f
", bill);
        if(bill>=400.0){
            sch = 15.0/100.0 * bill;
            amnt = sch + bill;
            printf("Surcharge: %.2f
", sch);
            printf("Total Amount: %.2f
", amnt);
        }
        
        else{
            
            printf("Surcharge: %.2f
", 0.0);
            printf("Total Amount: %.2f
", bill);
        }
    }
    
    else if(a>=200.0 && a<400.0){
        printf("Units Consumed: %.0f
", a);
        printf("Cost per Unit: %.2f
", 1.40);
        bill = a*1.40;
        printf("Bill: %.2f
", bill);
        if(bill>=400.0){
            sch = 15.0/100.0 * bill;
            amnt = sch + bill;
            printf("Surcharge: %.2f
", sch);
            printf("Total Amount: %.2f
", amnt);
        }
        
        else{
            
            printf("Surcharge: %.2f
", 0.0);
            printf("Total Amount: %.2f
", bill);
        }
    }
    
     else if(a>=400.0 && a<600.0){
        printf("Units Consumed: %.0f
", a);
        printf("Cost per Unit: %.2f
", 1.60);
        bill = a*1.60;
        printf("Bill: %.2f
", bill);
        if(bill>=400.0){
            sch = 15.0/100.0 * bill;
            amnt = sch + bill;
            printf("Surcharge: %.2f
", sch);
            printf("Total Amount: %.2f
", amnt);
        }
        
        else{
            
            printf("Surcharge: %.2f
", 0.0);
            printf("Total Amount: %.2f
", bill);
        }
    }
    
     else if(a>=600.0 && a<800.0){
        printf("Units Consumed: %.0f
", a);
        printf("Cost per Unit: %.2f
", 1.80);
        bill = a*1.80;
        printf("Bill: %.2f
", bill);
        if(bill>=400.0){
            sch = 15.0/100.0 * bill;
            amnt = sch + bill;
            printf("Surcharge: %.2f
", sch);
            printf("Total Amount: %.2f
", amnt);
        }
        
        else{
            
            printf("Surcharge: %.2f
", 0.0);
            printf("Total Amount: %.2f
", bill);
        }
    }
    
     else if(a>=800.0){
        printf("Units Consumed: %.0f
", a);
        printf("Cost per Unit: %.2f
", 2.00);
        bill = a*2.00;
        printf("Bill: %.2f
", bill);
        if(bill>=400.0){
            sch = 15.0/100.0 * bill;
            amnt = sch + bill;
            printf("Surcharge: %.2f
", sch);
            printf("Total Amount: %.2f
", amnt);
        }
        
        else{
            
            printf("Surcharge: %.2f
", 0.0);
            printf("Total Amount: %.2f
", bill);
        }
    }
}