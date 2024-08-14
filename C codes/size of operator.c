#include <stdio.h>
    int main(){
             
             int i;
             float f ;
             char c;
             double d;
  printf("enter a character");
        scanf("%c",&c);
          printf("enter a integer");
        scanf("%d",&i);
           printf("enter a float");
        scanf("%f",&f);
        printf("enter a double");
        scanf("%lf",&d);
        
        printf("%d is integer\n%c is character\n%f is float value \n%e is double value",i,c,f,d);
       printf("\n\n\t");
       printf("size of these data types are=");
       printf("\n size of character c is:%d",sizeof(c));
        printf("\nsize of integer i is:%d",sizeof(i));
         printf("\n size of float f is %d",sizeof(f));
          printf("\n size of double d is %d",sizeof(d));
          printf("\nsize of integer is %d ",sizeof(int));




    
    }