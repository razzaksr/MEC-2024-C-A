// railway ticket reservation system

#include<stdio.h>
#include<conio.h>

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

void main(){
    char ticketClass='\0';int requiredTicket=0, 
    available=0;
    printf("\nEnter the class of ticket Sleeper(S), First class(F) and General(G)");
    ticketClass=getch();
    switch(ticketClass){
        case 'F':case 'f':printf("\nFirst class tickets are 600rs");
        break;
        case 's':case 'S':printf("\nSleeper class tickets are 250rs");
        available=availableSleeper();
        printf("\n%d is available tickets in sleeper class",available);
        printf("\nHow many tickets do you need ");
        scanf("%d",&requiredTicket);
        bookSleeper(requiredTicket);
        break;
        case 'G':case 'g':printf("\nGeneral class tickers are 100rs");
        break;
        default:printf("\nInvalid class choosen");
    }
}