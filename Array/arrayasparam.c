// Array as function parameter and return type

#include<stdio.h>

void team(int person[],int size){
    for(int index=0;index<size;index++){
        printf("%d\t",person[index]);
    }
}

void changes(int person[],int size){
    //printf("\n%d in changes function",&person[0]);
    for(int index=0;index<size;index++){
        person[index]+=2;
    }
}

void main(){
    // local variable
    int experience[10]={12,5,2,10,7,0,3,7,4,6};
    // passing array to the function
    printf("\nBefore changes in experience\n");
    team(experience,10);
    //printf("\n%d",experience);
    changes(experience,10);
    printf("\nAfter changes in experience by function\n");
    team(experience,10);
}