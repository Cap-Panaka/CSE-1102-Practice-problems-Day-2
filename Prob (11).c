/*Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include <stdio.h>
int main() {
    float Temp;
    printf("Enter temperature in centigrade: ");
    scanf("%f",&Temp);
    if(Temp < 0){
        printf("Freezing weather");
    }else if(Temp>=0 && Temp<10){
        printf("Very Cold weather");
    }else if(Temp>=10 && Temp<20){
        printf("Cold weather");
    }else if(Temp>=20 && Temp<30){
        printf("Normal in Temp");
    }else if (Temp>=30 && Temp<40){
        printf("It's Hot");
    }else{
        printf("Its Very Hot");
    }
    return 0;
    
}
