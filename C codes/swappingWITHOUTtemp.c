#include <stdio.h>>
int main (void){

int a,b;
printf("enter two numbers");

scanf("%d%d",&a,&b);

a=a*b;
b=a/b;
a=a/b;

printf("\t%d\t%d",a,b);

}