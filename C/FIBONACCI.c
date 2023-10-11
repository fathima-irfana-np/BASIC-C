#include<stdio.h>
int main(){
    /*fibonacci for a limit of numbers*/
    int limit;
    int c=0,a=1,b=0;
    printf("enter your limit number");
    scanf("%d",&limit);
     
     for(int i=0;i<limit;i++){
        printf("\t\n%d",c);
        c=a+b;
         a=b;
        b=c;
     }


    return 0;
}