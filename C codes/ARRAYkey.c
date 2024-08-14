#include<stdio.h>
#include<stdlib.h>

int main(void){

     int limit,array[1000];
     int keyword,flag=1,i;
     printf("enter a limit ");
     scanf("%d",&limit);

     printf("enter your numbers ");
     for (i = 0; i < limit; i++)
     {
          scanf("%d",&array[i]);
     }
      
      printf("enter a keyword");
      scanf("%d",&keyword);

         printf("\n");

      for (i = 0; i < limit; i++)
     {
          if (array[i]==keyword)
          {
            flag=0;
            break;
            
              
          }
          
     }

     if (flag==0)
     {
         printf(" result is in  %dth array",i+1);
     }else{
         printf("result is not found");
     }
     
    
}