// find two maximum

#include<stdio.h>

void main(){
    int loopControl,userData=0, firstMax=0, secondMax=0;
    for(loopControl=1;loopControl<=20;loopControl++){
        printf("\nEnter the user data");
        scanf("%d",&userData);

        if(userData>=firstMax){
            secondMax=firstMax;
            firstMax=userData;
        }
        else if(userData>=secondMax&&userData!=firstMax){
            secondMax=userData;
        }
    }
    //printf("\n%d",loopControl);
    printf("\nFirst max is %d and second max is %d",firstMax,secondMax);
}