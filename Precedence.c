// operator precedence

#include<stdio.h>

void main(){
    char debit='A';int credit=5;
    //printf("%d",((debit++)+(credit/2)));
    // printf("%d",((debit++)+(debit+credit)));

    int cash=7, upi=10;
    // printf("\n%d",((cash--)+(upi/=2)*(cash+=2)));// 47
    //printf("\n%d",((--cash)+(upi/=2)*(cash+=2)));// 48
    /*
    (--cash)    >> 6
    (cash+=2)   >> 8

    */

   printf("%d",((++upi)*(cash-=2)+(upi-=4)));
   /*
   11*5+7
   55+7>> 62

    printf("%d",((++upi)+(cash-=2)*(upi-=4)));
   11+5*7
   35+7>> 42
   */

}