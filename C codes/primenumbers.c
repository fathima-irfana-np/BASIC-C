#include<stdio.h>
#include<stdlib.h>

int main(void){

int i,num1;
int flag=1;
printf("enter a prime number to check out whether its prime or not");
scanf("%d",&num1);

for ( i = 2; i < num1/2; i++)
{
    if (num1%i==0)
    {
            flag=0;
           break;}



}




if(flag==1){
    printf("prime");

}
else{
     printf("not prime");}


}