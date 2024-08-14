#include <stdio.h>
    int main(){
 int y;
 printf("enter a year");
 scanf("%d",&y);

 if(y%400==0)
 { printf("it is a leap year");}
 else if(y%100==0)
 { printf("it isn't a leap year");}
else if(y%4==0)
{ printf("it is a leap year");}
else{
    printf("it is not a leap year");
}

return 0;



    }