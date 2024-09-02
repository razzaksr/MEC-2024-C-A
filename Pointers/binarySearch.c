/*
1. find mid index value: start+(end-2)/2
2. check mid is what we looking for
3. search backward if mid is > looking for:
	between start and mid-1
4. search forward id mid< looking for
	between mid+1 and end

*/

#include<stdio.h>

int binary(int arr[],int start, int end, int userLookingFor){
    if(start<=end){
        int midIndex=start+(end-start)/2;
        if(arr[midIndex]==userLookingFor)
            return midIndex;
        else if(arr[midIndex]>userLookingFor)
            return binary(arr,start,midIndex-1,userLookingFor);
        else
            return binary(arr,midIndex+1,end,userLookingFor);
    }
    else
        return -1;
}

void main(){
    int myData[7]={12,17,22,56,65,78,90}, position=0, userGiven=0;
    printf("\nEnter the data to search ");
    scanf("%d",&userGiven);
    position=binary(myData,0,6,userGiven);
    printf("\n%d found @ %d",userGiven,position);
}