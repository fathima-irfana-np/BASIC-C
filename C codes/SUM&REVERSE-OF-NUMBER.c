
#include <stdio.h>
int main() {
     int n=0,i=0,a=0,x=0;
     int sum=0;
     int revvv[99];
     
    printf("enter number");
    scanf("%d",&n);
   x=n;

    
    while(x!=0){
        
          a=x%10;
          sum=sum+a;
          revvv[i]=a;
          x=x/10;
         i++;
    }
    int b=i;
   
printf("\n%d is the sum\n",sum);
printf("reverse of the %d is \t",n);

for(i=0;i<b;i++){
printf("%d",revvv[i]);}
            

   
}