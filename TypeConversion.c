// Type conversion: implcit conversion, explicit conversion

#include<stdio.h>

void main(){
    char savings=122;int current='C';
    printf("%d",savings);//putc(savings,stdout);
    printf("\n%d",current);
    savings++;
    printf("\n%c",savings);
}