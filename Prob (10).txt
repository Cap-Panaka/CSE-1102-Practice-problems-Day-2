//Write a C program to find whether a given year is a leap year or not.

#include <stdio.h>
int main(){
    int yr;
    printf("Enter year: ");
    scanf("%d",&yr);
    if(yr%400==0 || yr%4==0 && yr%100!=0){
        printf("%d is a leap year.",yr);
    }
    else{
        printf("%d is not a leap year",yr);
    }
    return 0;
}
