// to understand local variable scope, call by value
#include<stdio.h>

void debit(int required){
    printf("\nRequired got value is %d", required);//1234
    required-=10;// 1224
    printf("\nValue after the changes in debit is %d",required);// 1224
}

void main(){
    int pinNumber=1234;
    printf("\nPin number in main %d", pinNumber);
    debit(pinNumber);
    printf("\nPin number after debit call is %d",pinNumber);// 
}