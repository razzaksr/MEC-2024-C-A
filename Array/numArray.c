// numerical array: int, float, double
// No of debits in recent transactions
#include<stdio.h>

void main(){
    float bankTransactions[10]={0.0F};
    // float bankTransactions[10];
    // insert data in array
    for(int index=0;index<10;index++){
        scanf("%f",&bankTransactions[index]);
    }
    // pritn data from array
    for(int index=0;index<10;index++){
        printf("\n%.2f",bankTransactions[index]);
    }
}