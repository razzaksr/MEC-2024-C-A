// nested loop for bus ticket

#include<stdio.h>

void main(){
    int coach=1, ticket=0;
    while(coach<=4){
        printf("\n%d coach of the day arrived at the bay",
        coach);
        int time=1, seats=20;
        while(time<=10&&seats>0){
            printf("\nEnter the number of seats required ");
            scanf("%d",&ticket);
            if(ticket<=seats){
                printf("\n%d of seats are booked @ %d",
                ticket,coach);
                seats-=ticket;
            }
            else{
                printf("\n%d seats are available %d",
                seats,coach);
            }
            time++;
        }
        coach++;
    }
}