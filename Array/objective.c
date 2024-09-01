// objective of array

#include<stdio.h>
/*
char myName[20]="Razak Mohamed S";
char myName[20]={'R','a','z','a','k',' ',
'M','o','h','a','m','e','d',' ','S'};
*/

void main(){
    double salary[8]={8.9,12.5,1.2,8.9,3.4,10.4,22.5,9.2};
    // maximum salary
    int position=0;double maximum=salary[0];
    while(position<8){
        if(maximum<salary[position]){
            maximum=salary[position];
        }
        position++;
    }
    printf("\nThe maximum package is %.2lf",maximum);
}
    // for(int position=0;position<=7;position++){
    //     printf("\n%d\t%lf",&salary[position],salary[position]);
    // }
    //printf("\n%d",sizeof(salary));
    // printf("\n%d",salary);
    // printf("\n%d",&salary[0]);
    // printf("\n%lf",salary[0]);
    // printf("\n%d\t%lf",&salary[0],salary[0]);
    // printf("\n%d\t%lf",&salary[1],salary[1]);
    // printf("\n%d\t%lf",&salary[2],salary[2]);
    // printf("\n%d\t%lf",&salary[3],salary[3]);
    // printf("\n%d\t%lf",&salary[4],salary[4]);
    // printf("\n%d\t%lf",&salary[5],salary[5]);
    // printf("\n%d\t%lf",&salary[6],salary[6]);
    // printf("\n%d\t%lf",&salary[7],salary[7]);

// void main(){
//     double dharanSalary = 8.9, devaSalary=12.5,ramiSalary=1.2;

//     // less package among the 3 employees
//     if(dharanSalary<devaSalary&&dharanSalary<ramiSalary){
//         printf("\nDharana getting very less %lf",dharanSalary);

//     }
//     else if(devaSalary<ramiSalary){
//         printf("\nDeve earning less salary %lf",devaSalary);
//     }
//     else{
//         printf("\nRami earning less salary %lf",ramiSalary);
//     }
// }