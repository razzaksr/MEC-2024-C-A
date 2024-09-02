// selection sort using pointer

#include<stdio.h>

void selectionViaPointer(int *grp, int size){
    // selecting each index to sort
    for(int select=0;select<size;select++){
        // comapre each index to compare with selected
        for(int compare=select+1;compare<size;compare++){
            // swap
            if(*(grp+select) > *(grp+compare)){
                *(grp+select) += *(grp+compare);
                *(grp+compare) = *(grp+select) - *(grp+compare);
                *(grp+select) -= *(grp+compare);
            }
        }
    }
}

void selection(int grp[], int size){
    // selecting each index to sort
    for(int select=0;select<size;select++){
        // comapre each index to compare with selected
        for(int compare=select+1;compare<size;compare++){
            // swap
            if(grp[select]>grp[compare]){
                grp[select] += grp[compare];
                grp[compare] = grp[select] - grp[compare];
                grp[select] -= grp[compare];
            }
        }
    }
}

void main(){
    int myData[7]={78,12,56,90,65,22,17};
    //selectionViaPointer(myData,7);
    selection(myData,7);
    for(int index=0;index<7;index++){
        printf("%d\t",myData[index]);
    }
}