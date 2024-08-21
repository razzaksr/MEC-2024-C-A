// SIP calculator:

#include<stdio.h>

void main(){
    // variable initialization
    int monthlyInvestment=0, duration=0;
    double annualInterestRate=0.0, returns=0.0, monthlyInterestRate=0.0, originalOutcome=0.0;
    // inputs
    printf("----------------SIP calculator-----------------\nMonthly investment");
    scanf("%d",&monthlyInvestment);
    printf("\nInterest rate ");
    scanf("%lf",&annualInterestRate);
    printf("\nDuration in months");
    scanf("%d",&duration);  

    monthlyInterestRate=annualInterestRate/12/100;

    for(int point=1;point<=duration;point++){
        returns=(returns+monthlyInvestment)*(1+monthlyInterestRate);
    }

    originalOutcome=monthlyInvestment*duration;
    printf("\nFinal returns out of SIP is %.2lf for invested %.2lf",returns,originalOutcome);
}