// nested prime number

#include<stdio.h>

void main(){

    // to print prime numbers with given range(start-end)
    int current=0, stop=0;
    printf("\nenter the start range ");
    scanf("%d",&current);
    printf("\nEnter the end range ");
    scanf("%d",&stop);

    // ranges
    while(current<=stop){
        int check=2, isPrime=1;
        while(check<current){
            if(current%check==0){
                isPrime=0;
                break;
            }
            check++;
        }
        if(isPrime==1){
            printf("\n%d is prime",current);
        }
        current++;
    }
}

// void main(){

//     // to check given number is prime or not
//     int userGiven=0, control=2;
//     printf("\bEnter the any number to check for prime ");
//     scanf("%d",&userGiven);
//     while(control<userGiven){
//         // any possibility has matched execution stopped 
//         // and nothing will execute further since i have
//         // used retiurn keyword
//         if(userGiven%control==0){
//             printf("\n%d is not a prime",userGiven);
//             return;
//         }
//         control++;
//     }
//     // if nothing has matched this statement will execute
//     printf("\n%d is prime",userGiven);
// }