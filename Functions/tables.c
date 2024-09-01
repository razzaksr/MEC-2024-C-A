// table of 5 using recursion
#include<stdio.h>

void tablesFive(int limit, int result){
    if(limit>0){
        result+=5;
        printf("%d ",result);
        limit--;
        tablesFive(limit,result);
    }
}

void main(){
    printf("\nPrinting 5 tables\n");
    tablesFive(7,0);
    //tables(5);
}

void tables(int count){
    if (count==0){
        printf("\n The program has stopped");
    }
    else{
        printf("\n%d",count*7);
        count--;
        tables(count);
    }
}