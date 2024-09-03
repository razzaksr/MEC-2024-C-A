// 5600,8700,3500,43000,28954,700,59000,3000

#include<stdio.h>

void main(){
int value[10]={0};
printf("\nEnter the value for array upto 6:");
for(int index=0;index<10;index++){
    scanf("%d",&value[index]);
}
printf("\nFiltered transactions\n");
for(int index=0;index<6;index++){
    if(value[index]<20000){
        printf("%d\t",value[index]);
    }
}
}