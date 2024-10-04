#include<stdio.h>
int main (){

int budget;
printf("Please enter your budget : ");
scanf("%d", & budget);

if (budget>= 800)
{
   printf("Go for a tour");
}
else if (budget < 800 && budget> 500)
{
    printf("Go for a date");
}
else if (budget < 500 && budget > 300)
{
    printf("Go for a room date");
}
else{
    printf("Go to a resturent");
}






    return 0;
}