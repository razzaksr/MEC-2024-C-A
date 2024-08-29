// Series with given range


#include<stdio.h>

void main(){
    int begin=0, end=0;
    
    printf("\nEnter the start point ");
    scanf("%d",&begin);// 10
    printf("\nEnter the end point ");
    scanf("%d",&end);// 90

    for(;begin<=end;begin++){
        if(begin==2||begin==3||begin==5||begin==7||begin%2!=0&&
        begin%3!=0&&begin%5!=0&&begin%7!=0){
            printf("\nPrime %d",begin);
        }
    }
}
    // 10 11 12 13 14 ................
    // b  b   b  b  b

    // even series
    // for(;begin<=end;begin++){
    //     if(begin%2!=0){
    //         printf("%d ",begin);
    //     }
    // }
//}