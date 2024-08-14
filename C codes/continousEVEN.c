#include<stdio.h>
#include <stdlib.h>

int main(void){
 
 int num1;
 int i,sum=0;
 printf("enter a number");
 scanf("%d",&num1);

for ( i = 0; i <=num1; i++)
{
    if (i%2==0)
    {
       sum=sum+i;
        printf("\n");
    
    }
 }
  printf("%d",sum);   










}

