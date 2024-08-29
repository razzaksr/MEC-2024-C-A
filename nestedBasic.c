// nested loop

/*
loop1: init, cond,iter
	logic of loop1
	loop2: init, vond, iter
		logic of loop2

*/

#include<stdio.h>

void main(){
    for(int table=5;table<=10;table++){
        // logic/ body of the table loop
        printf("\n Tables of %d",table);
        // logic/ body of the table loop
        for(int number=1;number<=10;number++){
            printf("\n%d X %d = %d",number,
            table,(number*table));
            // printf("\n%d",number);
        }
    }
}