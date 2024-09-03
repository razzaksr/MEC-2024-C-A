// find and replace

#include<stdio.h>
#include<string.h>

void replace(char got[7][50],char *find,char *change){
    for(int row=0;row<7;row++){
        // used check current string is C
        if(strcmp(got[row],find)==0){
            // replace current string by Python
            strcpy(got[row],change);
        }
    }
}

void main(){
    // initializing multi dimensional char array
    char myDocument[7][50]={"Embedded","C",",","IoT","using","C","language"};
    printf("\nBefore replace\n");
    for(int index=0;index<7;index++){
        printf("%s ",myDocument[index]);
    }
    replace(myDocument,"C","Python");
    printf("\nAfter replace\n");
    for(int index=0;index<7;index++){
        printf("%s ",myDocument[index]);
    }
}