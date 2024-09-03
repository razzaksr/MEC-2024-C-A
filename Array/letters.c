// String examples

#include<stdio.h>
#include<string.h>

void main(){
    char myDepartment[50], *dept;
    printf("\ndepartment name to check attend interview ");
    gets(myDepartment);
    // scanf("%s",myDepartment);
    // printf("\n%s",myDepartment);
    strcpy(dept,myDepartment);// copy myDepartment ot dept
    puts(dept);
    // check department against interview eligible
    strlwr(dept);
    if(strcmp(dept,"computer science and engineering")==0||
    strcmp(dept,"information technology")==0||
    strcmp(dept,"cybersecurity")==0||
    strcmp(dept,"artificial intelligence")==0||
    strcmp(dept,"business system")==0){
        printf("\n%s eligble to attend Hexaware interview");
    }
    else{
        printf("\nTry for Core company");
    }
}