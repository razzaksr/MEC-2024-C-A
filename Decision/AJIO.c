// Ajio e-commerce app

#include<stdio.h>
#include<string.h>

void main(){
    char brand[20]="", label='\0';
    printf("\n----------Welcome to AJIO Fashion---------------\nEnter the brand ");
    //fgets(brand,sizeof(brand),stdin);
    scanf("%s",brand);
    strlwr(brand);
    //printf("%s",brand);
    if(strcmp(brand,"adidas")==0||strcmp(brand,"puma")==0||strcmp(brand,"polo")==0){
        printf("\nShirts are starting from size 34 to 46 with price of 500 to 1500");
    }
    else if(strcmpi(brand,"vanhussen")==0||strcmp(brand,"otto")==0){
        printf("\nVanhussen, Otto are available with size of 32 to 38 of price 200 to 900");
    }
    else if(strcmpi(brand,"denim")==0||strcmp(brand,"fusion")==0){
        printf("\nDenim, Fusion are available with size of 32 to 38 of price 900 to 2000");
    }
    else{
        printf("\nAdidas, Vanhussan, Polo, Puma are available with 200 to 5000 rupees");
    }

    // label=brand[0];// initial character of brand
    // switch(label){
    //     case 'A':case 'a': case 'P':
    //     printf("\nShirts are starting from size 34 to 46 with price of 500 to 1500");
    //     break;
    //     case  'D':case 'F':case 'O': 
    //     printf("\nDenim, Fusion, Otto are available with size of 32 to 38 of price 200 to 900");
    //     break;
    //     default:printf("\nAdidas, Vanhussan, Polo, Puma are available with 200 to 5000 rupees");
    // }
}