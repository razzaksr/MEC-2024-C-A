// bitwise operator: >> << & | ^

#include<stdio.h>

void main(){
    int invest='D', borrow=11;
    printf("%d",invest<<2);
    printf("\n%d",borrow>>4);
}

/*
1024 512 256 128 64 32 16 8 4 2 1
   0   0   0   0  1  0  0 0 1 0 0 0 0  >> 68
   0   0   1   0  0  0  1 0 0 0 0   >> 272

               0  0  0  0 1 0 1 1   >> 11
               0  0  0  0 0 0 0 0   >> 0
*/

