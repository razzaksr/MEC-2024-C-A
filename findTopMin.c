// find top two minimum

#include<stdio.h>

void main(){
    int userData=0, firstMin=32756,secondMin=32756;
    for(int loopControl=1;loopControl<=20;loopControl++){
        printf("\nenter the value");
        scanf("%d",&userData);
        if(userData<=firstMin){
            secondMin=firstMin;
            firstMin=userData;
        }
        else if(userData<=secondMin&&userData!=firstMin){
            secondMin=userData;
        }
    }
    printf("\n%d is first min and %d second min",firstMin,secondMin);
}