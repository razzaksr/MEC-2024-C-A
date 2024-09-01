// dynamic step up: new mobile pre-bookings

#include<stdio.h>

void main(){
    int mobileStock=100, userBook=0, invoice=0;
    // for(inti;cond;iter)
    for(;mobileStock>0;){
        printf("\nLet us know how many iPhone need tp pre-book ");
        scanf("%d",&userBook);//12. 10,50
        if(mobileStock>=userBook){
            mobileStock-=userBook;// dynamic iteration
            printf("\n%d number of mobiles are pre-booked", userBook);
            invoice++;
        }
        else{
            printf("\nAvailable Stock is %d",mobileStock);
        }
    }
    printf("\nNumber of invoice's for 100 iPhone %d",invoice);
}