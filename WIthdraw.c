// cash withdraw

#include<stdio.h>

void main(){
    int availableCash=20000, requiredCash=0;
    for(;availableCash>0;){
        printf("\nLet us know required cash to be withdraw: ");
        scanf("%d",&requiredCash);
        if(requiredCash<=availableCash){
            if(requiredCash%500==0||requiredCash%100==0||requiredCash%200==0){
                availableCash-=requiredCash;
                printf("\n%d withdrawn successfully", requiredCash);
            }
            else{
                printf("\nRequested denomination not available");
            }
        }
        else{
            printf("\nUnable dispense %d due to shortage of cash", requiredCash);
        }
    }
}