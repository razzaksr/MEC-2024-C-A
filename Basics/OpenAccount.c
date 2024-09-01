// Open savings account using c program


#include<stdio.h>// to getn permission to use input and output functions

void main(){
    char fullName[50]="";// initialization
    char panCard[10]="";
    char address[200]="";
    int aadhaar=0, age=0, mobileNumber=0;
    printf("-----------------Welcome to Axis bank IVR KYC-------------");
    printf("\nEnter the full name");
    //scanf("%s",fullName);
    //gets(fullName);
    //printf("\n%s",fullName);
    fgets(fullName,sizeof(fullName),stdin);
    printf("\nEnter the PAN card number");
    //scanf("%s",panCard);
    //gets(panCard);
    fgets(panCard,sizeof(panCard),stdin);
    printf("\nEnter the Communication address");
    //scanf("%s",address);
    //gets(address);
    fgets(address,sizeof(address),stdin);
    printf("\nEnter the aadhaar number ");
    scanf("%d",&aadhaar);
    printf("\nEnter the Mobile number");
    scanf("%d",&mobileNumber);
    printf("\nEnter the age ");
    scanf("%d",&age);

    //printf("Your Savings account with Axis has opened successfully with following details\n%s\n%s\n%d",fullName,address,mobileNumber);
    printf("Your Savings account with Axis has opened successfully with following details");
    fputs(fullName,stdout);
    fputs(address,stdout);
    printf("\n%d",mobileNumber);

}