#include<stdio.h>

void greetings(){
    printf("\nHappy day!!!!!!!!!!!!!!");
    greetings();
}

void attempt(char alphabet){
    //putchar(alphabet);
    if(alphabet<='Z'){
        printf("%c ",alphabet);
        alphabet++;//iter
        attempt(alphabet);// recursive
    }
}

// 5 table>> 12>> 5,10,15,20,25,30,35,40,45,50,55,60

void main(){
    printf("\nWelcome to recusrive\n");
    //greetings();// start
    attempt('A');//start
    printf("\nThanks for using recursive");
}