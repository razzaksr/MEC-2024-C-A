// global variables access between functions

#include<stdio.h>
int pinNumber=1234;// global varibale

// 
void debit(){
    printf("\nPin number in debit %d", pinNumber);
    pinNumber-=10;
    printf("\nChanges in pin number in debit block %d",pinNumber);
}

void main(){
    printf("\nPin number valure in main %d",pinNumber);
    debit();
    printf("\nAfter debit call the pin number is %d",pinNumber);
}