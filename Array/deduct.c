// deduct 20rs if 2000 to 5000

#include<stdio.h>
void main(){
    int value[6]={12000,4000,3500,8000,9800,2200};
    for(int index=0;index<6;index++){
        if(value[index]<=5000&&value[index]>=2000){
            value[index]-=20;
        }
        printf("%d\t",value[index]);
    }
}