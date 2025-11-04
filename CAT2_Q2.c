/*
Nam:Yvonne Kwamboka
Reg  No:PA106/G/28782/25
Description:c program to display gross pay taxes and net pay
*/

#include<stdio.h>
int main(){

//declaration
    float hours,wages,grosspay,taxes,netpay;
//prompt  input from thhe user
    printf("enter hours worked in a week:");
    scanf("%f",&hours);

    printf("enter hourly wages:");
    scanf("%f",&wages);
//calculation for grosspay
    if(hours>40)
        grosspay=(40*wages)+((hours-40)*wages*1.5);
    else
        grosspay=hours*wages;
//calculation for taxes
    if(grosspay<=600)
        taxes=grosspay*0.15;
    else
        taxes=(600*0.15)+((grosspay-600)*0.20);

//calculation for netpay
    netpay=grosspay-taxes;

//display results
    printf("\ngrosspay %f:",grosspay);
     printf("\ntaxes %f:",taxes);
     printf("\nnetpay  %f:",netpay);
return 0;}
