#include <stdio.h>
int main(){

     long c,a,b;
     
     printf("enter 3 numbers");
     
     scanf("%d%d%d",&a,&b,&c);

      if(a>b){
        if(a>c){
            printf("%d is the largest",a);
        } else{
          printf("%d is the largest",c);}
      }
      else if(b>a){
        printf("%d is the largest yes",b);
      }
      else{
        printf("invalid entry");
      }
       

}
