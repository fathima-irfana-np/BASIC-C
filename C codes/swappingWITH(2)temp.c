#include <stdio.h>
int main(void){

int a,j,b;

printf("enter two number");

scanf("%d%d",&a,&b);
j=a+b;
a=j-a;
b=j-b;
printf("%d\t%d",a,b);


}