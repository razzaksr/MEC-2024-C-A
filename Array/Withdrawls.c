// No of debits in recent transactions
#include<stdio.h>
void main(){
    // initializing array
    float transactions[10]={0.0F};int noOfDebits=0;
    // get the values from user
    for(int index=0;index<10;index++){
        printf("\nEnter the %d transaction ",index);
        scanf("%f",&transactions[index]);
        // find the no of debits
        if(index>0){
            if(transactions[index]<transactions[index-1]){
                noOfDebits++;
            }
        }
    }
    printf("\n%d Number of debits in recent transaction",
    noOfDebits);
    noOfDebits-=3;// exclude the allowed 3 debits
    if(noOfDebits>0){
        transactions[9]-=(noOfDebits*20);
    }
    printf("\nAvailable balance %.2f",transactions[9]);
}