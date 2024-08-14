#include <stdio.h>
int main(){
     
     int r,i,j,c;
     int array[100][100];
     printf("how many rows?");
     scanf("%d",&r);
     printf("how many columns ?");
     scanf("%d",&c);
     printf("enter the elements");
     
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
     scanf("%d",&array[i][j]);}}

printf("your array=\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
     printf("%d\t",array[i][j]);}
     printf("\n");}

printf("the transpose is :-");
 printf("\n");
 
for(i=0;i<r;i++){
        for(j=0;j<c;j++){
     printf("%d\t",array[j][i]);}
     printf("\n");}

      return 0;
}
