// operations using pointers

#include<stdio.h>

void main(){
    int macro=7,micro=4, *sigma, *delta;
    // printf("%d",macro+micro);
    sigma=&macro;delta=&micro;
    // (*sigma)++;(*delta)--;
    printf("\nBefore swap %d is macro\t%d is micro",macro,micro);
    *sigma += *delta;// 11>> *sigma>> macro
    *delta = *sigma - *delta;// 7>>  *delta >> micro
    *sigma -= *delta;// 4>> *sigma>> macro
    printf("\nAfter swap %d is macro\t%d is micro",macro,micro);
}