// railway ticket reservation system
#include"booking.h"
#include<conio.h>

void main(){
    char ticketClass='\0';int requiredTicket=0, available=0;
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