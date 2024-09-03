// sorting the string
// Business Studies>> 

#include<stdio.h>
#include<string.h>
void selection(char *actual){
    for(int select=0;select<strlen(actual);select++){
        for(int compare=select+1;compare<strlen(actual);compare++){
            if(actual[select]>actual[compare]){
                actual[select] += actual[compare];
                actual[compare] =actual[select] - actual[compare];
                actual[select] -= actual[compare];
            }
        }
    }
}
void main(){
    char myDepartment[50]="Business Studies";
    // actual[0]='b';
    printf("\n%s",myDepartment);
    // selection sort
    selection(myDepartment);
    // check 
    printf("\n%s",myDepartment);
}