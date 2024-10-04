#include<stdio.h>
int main (){

int a = 10 , b = 4;

int plus = a + b;
int minus = a - b;
int multiplication = a * b;
int division = a / b;
float division1 = a / b;
int modulus = a % b; // prints the remainder

printf("Sum = %d\n",plus );
printf(" Minus = %d \n",minus );
printf("multiplucation  = % d\n",multiplication );
printf("division  = %d \n", division);
printf("division1 = %f \n",division1 );
printf("modulus = %d\n",modulus );


    return 0;
}