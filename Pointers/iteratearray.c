// using pointer to display array values

#include<stdio.h>

void main(){
    double interest[5]={12.5,9.5,6.5,4.5,11.2}, *refer;
    refer=interest;
    // refer++;
    // printf("\n%.2lf",*refer);//12.5

    for(int index=0;index<5;index++){
        printf("\n%.2lf",*refer);
        refer++;
    }
}

    
    // for(int index=0;index<5;index++){
    //     printf("\n%.2lf",interest[index]);
    // }