#include<stdio.h>
int main (){

int n;
printf("Please enter the value of n :");
 scanf("%d",&n);

for (int i = 1; i <= n; i+=1)
{
    if (i%2 == 0)
    {
        printf("%d is an even number\n",i);
    }
    else{
        printf("%d is a odd number\n",i);
    }
    
}






    return 0;

}