#include<stdio.h>
int noOfSleeperTickets=20, noOfGeneralTickets=200,
noOfFirstTickets=10;

int availableSleeper(){
    return noOfSleeperTickets;
}

void bookSleeper(int quantity){
    int pay=0, toBePaid=0;
    if(noOfSleeperTickets>=quantity){
        toBePaid=quantity*250;
        printf("\nenter the amount to pay tickets ");
        scanf("%d",&pay);
        if(pay>=toBePaid){
            noOfSleeperTickets-=quantity;
            printf("\n%d of sleeper tickets are booked",
            quantity);
        }
        else{
        printf("\nTickets are not booked due to insufficient balance");
        }
    }
    else{
        printf("\n%d of tickets are not available",quantity);
    }
}