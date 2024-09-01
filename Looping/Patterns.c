// Patterns:

#include<stdio.h>

/* left lower floyd
#####
####
###
##
#
*/

// left lower floyd pattern
void main(){
    int limit=0;
    printf("\nEnter limit for left upper floyd pattern ");
    scanf("%d",&limit);
    for(int row=1;row<=limit;row++){
        for(int column=limit;column>=row;column--){
            printf("#");
        }
        printf("\n");
    }
}

// left upper floyd pattern
// void main(){
//     int limit=0;
//     printf("\nEnter limit for left upper floyd pattern ");
//     scanf("%d",&limit);
//     for(int row=1;row<=limit;row++){
//         for(int column=1;column<=row;column++){
//             printf("#");
//         }
//         printf("\n");
//     }
// }

// // square pattern
// void main(){
//     int limit=0;
//     printf("\nEnter the limit for square pattern ");
//     scanf("%d",&limit);
//     for(int row=1;row<=limit;row++){
//         for(int column=1;column<=limit;column++){
//             printf("#");
//         }
//         printf("\n");
//     }
// }