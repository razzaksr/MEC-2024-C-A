#include<stdio.h>

// number=5
// int factorial(int number){
//     int determined=1;
//     // using loop
//     while(number>0){
//         determined*=number;// 5X1>> deteremined
//         number--;// 
//     }
//     return determined;
// }

int factorial(int number, int determined){
    if(number>0){
        determined*=number;
        number--;
        factorial(number,determined);
    }
    else{
        return determined;
    }
}

void main(){
    int result=0;
    result=factorial(3,1);
    printf("\n%d is the factorial",result);
}