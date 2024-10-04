#include<stdio.h>
int main (){

int budget;
printf("Please enter your budget : ");
scanf("%d", &budget);

if (budget >= 5000)
{
    if (budget >= 10000)
    {
        printf("Go to Saint martins");
    }
    else{
        printf("Go to Cox's Bazar");
    }
    
}
else{
    printf("Stay at home");
}




    return 0;
}