#include<stdio.h>
int main (){

int day ;
printf("Please enter day in number : ");
scanf("%d",& day);

//If we donot use break , it will print everything

switch (day)
{
case 1:
    printf("Saturday\n");
    break;
    
case 2:
    printf("Sunday\n");
    break;

case 3:
    printf("Monday\n");
    break;

case 4:
    printf("Tuesday\n");
    break;    

case 5:
    printf("Wednessday\n");
    break;    

case 6:
    printf("Thrusday\n");
    break;    

case 7:
    printf("Friday\n");
    break;    

default:
printf("Wrong day");
    break;
}





    return 0;
}