#include <stdio.h>

int main(){
	
 int i,num;
 printf("enter annumber");
 scanf("%d",&num);

 if(num<2){
    printf("it is not a prime number");
 }
for(i=2;i<=num/2;i++){
if(num%i==0){
      printf("%d is not prime",num);
      return 0;
   }
  
}printf("%d is prime",num);
}
