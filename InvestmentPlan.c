// Investment plan based on expected interest rate

#include<stdio.h>

void main(){
    float expectedInterestRate=0.0F, returns=0.0F;
    int investment=0;
    printf("-----------------Welcome to Canara bank----------------");
    printf("\nTell us your expected interest rate ");
    scanf("%f",&expectedInterestRate);
    printf("\nTell us money u wish to invest ");
    scanf("%d",&investment);

    // find plan
    if(expectedInterestRate>=6.1&&expectedInterestRate<=7){
        printf("\nYou could invest in Fixed Deposits");
        returns=investment+(investment*expectedInterestRate)/100;
        returns-=(returns*0.010);
    }
    else if(expectedInterestRate>7&&expectedInterestRate<10){
        printf("\nYou could invest in Mutual funds, debt funds with high risk");
        returns=investment+(investment*expectedInterestRate)/100;
        returns-=(returns*0.020);
    }
    else{
        printf("\nYou could invest in savings babnk account");
        returns=investment+(investment*5.5)/100;
    }
    printf("\nTotal investment %d\nReturns i get %.2f",investment,returns);
}