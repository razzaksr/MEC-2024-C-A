// arithemetic demonstration: loan calculator

#include<stdio.h>

void main(){
    printf("--------------Welcome to the Bajaj FinServ-------------------");
    // initializations
    int loanAmount=0, installments=0;
    double rateOfInterest=0.0, emi=0.0, interestPayable=0.0,totalRepayable=0.0;

    // getting inputs
    printf("\nEnter the desired loan amount");
    scanf("%d",&loanAmount);
    printf("\nEnter the installment ");
    scanf("%d",&installments);
    printf("\nEnter the rate ofg interest");
    scanf("%lf",&rateOfInterest);
    
    // calculations
    interestPayable=loanAmount*rateOfInterest/100;
    totalRepayable=loanAmount+interestPayable;
    emi=totalRepayable/installments;

    // result
    printf("\nEMI %.2lf \nPrinciple amount %d\nInterest for the loan %.2lf\nTotal repayable %.2lf",emi,loanAmount,interestPayable,totalRepayable);
}