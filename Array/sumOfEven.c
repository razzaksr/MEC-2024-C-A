// sum of even positions

#include<stdio.h>

void main(){
    int myData[7]={3,4,12,90,41,10,30}, sum=0;
    for(int index=0;index<7;index+=2){
        sum+=myData[index];
    }
    printf("\nThe sum of even positions is %d",sum);
}