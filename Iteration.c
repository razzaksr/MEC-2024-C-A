// understanding loop

#include<stdio.h>

void main(){

    int seat=1, noOfBooked=0, noOfNotBooked=0, fare=0;

    while(seat<=10){
        printf("\nPay the fare ");
        scanf("%d",&fare);
        if(fare>=350){
            printf("\nYour seat has booked ");
            noOfBooked++;
        }
        seat++;
    }

    noOfNotBooked=10-noOfBooked;

    printf("\n%d no of seats are booked\n%d no of seats not booked",noOfBooked,noOfNotBooked);;

    // int count=1, userDefined=0, countEven=0;// init

    // // condition
    // while(count<=10){
    //     printf("\nEnter the any number ");
    //     scanf("%d",&userDefined);
    //     if(userDefined%2==0){
    //         countEven++;
    //     }
    //     count++;// linear increment
    // }
    // //printf("\nCurrent value of loop control variable %d",count);
    // printf("\nNumber of even is %d",countEven);
}