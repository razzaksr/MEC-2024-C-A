#include<stdio.h>
#include<string.h>
void main(){
    char name[100]="";
    printf("\nEnter the name to find the max char ");
    scanf("%s",name);
    // char name[20]="Razak";// string initialization
    // printf("\n Size of array is %d",sizeof(name));
    // printf("\n%d number of chars ",strlen(name));
    int position=strlen(name);char maximum=name[0];
    while(position>=0){
        if(maximum<name[position]){
            maximum=name[position];
        }
        position--;
    }printf("\nThe largest letter is %c",maximum);
}