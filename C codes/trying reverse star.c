// reverse star 
//counting number pattern

  #include <stdio.h>
    int main(){
int n,i,j,k=0;
printf("enter a number");
scanf("%d",&n);

 for(i=1;i<=n;i++){

    printf("\n\t\t");

 for(j=1;j<=n-i;j++){

     printf("  ");
 }
 for(k=n;k>i;k--){
     printf("*");
 }
 }

    }