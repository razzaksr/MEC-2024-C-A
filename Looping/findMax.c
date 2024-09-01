// find maximum among 20 inputs

#include<stdio.h>

void main(){
    int numberOfInputs=1, userData=0, maximum=0;
    while(numberOfInputs<=20){
        printf("\nEnter the input ");
        scanf("%d",&userData);// 78
        // 78>=56
        if(userData>=maximum){
            maximum=userData;// 78
        }
        numberOfInputs++;
    }
    printf("\nMAximum among two inputs is %d",maximum);
}