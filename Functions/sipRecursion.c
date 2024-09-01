// SIP calculator using recursion

#include<stdio.h>

void calculateSIP(double monthlyInterest, int duration, int monthlyInvestment, double result){
    if(duration>0){
        result=(result+monthlyInvestment)*(1+monthlyInterest);
        duration--;
        calculateSIP(monthlyInterest,duration,monthlyInvestment,result);
    }
    else{
        printf("\nFinal returns out of SIP is %.2lf",result);
    }
}

void main(){
    // variable initialization
    int monthlyInvestment=0, duration=0;
    double annualInterestRate=0.0, monthlyInterestRate=0.0, originalOutcome=0.0;
    // inputs
    printf("----------------SIP calculator-----------------\nMonthly investment");
    scanf("%d",&monthlyInvestment);
    printf("\nInterest rate ");
    scanf("%lf",&annualInterestRate);
    printf("\nDuration in months");
    scanf("%d",&duration);  

    monthlyInterestRate=annualInterestRate/12/100;

    calculateSIP(monthlyInterestRate,duration,monthlyInvestment,0.0);

    originalOutcome=monthlyInvestment*duration;
    printf("\n for invested %.2lf",originalOutcome);
}