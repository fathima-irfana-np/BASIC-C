#include <stdio.h>
int main(){
 int num,i;
 int flag=1;

 printf("enter a number");
 scanf("%d",&num);

 if(num<2){
    printf("it is not prime number");
 }

 for(i=2;i<=num/2;i++){
    if(num%i==0){
        flag=0;


    }
 }
  if(flag==0)
  printf("%d is not prime",num);
  else
  printf("%d is prime",num);

}