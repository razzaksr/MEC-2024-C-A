// string array for bus chart

#include<stdio.h>
#include<string.h>

void main(){
    char chart[5][6];// multi dimesional char array/string array
    int fare=0;
    for(int row=0;row<5;row++){
        for(int seat=0;seat<5;seat++){
            printf("\nPay for the ticket ");
            scanf("%d",&fare);
            if(seat==2){
                chart[row][seat]=' ';
            }
            else{
                if(fare>=350){
                    printf("\nSeat has booked @ %d row %d seat",row,seat);
                    chart[row][seat]='$';
                }
                else{
                    printf("\nSeat hasn't booked");
                    chart[row][seat]='#';
                }
            }
        }
        chart[row][5]='\n';
    }
    printf("\n%s",chart);
}