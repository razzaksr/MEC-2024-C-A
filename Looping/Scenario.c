// loop scenario

#include<stdio.h>

void main(){
    int expectedCount=-1;
    float cgpa=0.0F;
    do{
        printf("\nTell us your CGPA ");
        scanf("%f",&cgpa);
        if(cgpa>7.1F){
            printf("\nYou are recruiuted as Associate Software Trainee");
            expectedCount--;
        }
    }while(expectedCount>0);
    // int expectedCount=20;
    // float cgpa=0.0F;
    // while(expectedCount>0){
    //     printf("\nTell us your CGPA ");
    //     scanf("%f",&cgpa);
    //     if(cgpa>7.1F){
    //         printf("\nYou are recruiuted as Associate Software Trainee");
    //         expectedCount--;
    //     }
    // }
    // int expectedCount=20;
    // float cgpa=0.0F;
    // while(expectedCount>0){
    //     printf("\nTell us your CGPA ");
    //     scanf("%f",&cgpa);
    //     if(cgpa>7.1F){
    //         printf("\nYou are recruiuted as Associate Software Trainee")
    //     }
    //     expectedCount--;
    // }
}