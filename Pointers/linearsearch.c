// linear search in array using pointer
// find the index and address of data which user required

#include<stdio.h>
#include<string.h>
int linear(char *each,int length,char users){
    for(int index=0;index<length;index++){
        if(*each==users){
            return index;
        }
        each++;
    }
    return -1;
}
void main(){
    char email[20]="razzaksr@gmail.com";int found; char userWant='\0';
    printf("\nEnter the character to search ");
    scanf("%c",&userWant);
    found=linear(email,strlen(email),userWant);
    printf("\nPosition of user character is %d",found);
}