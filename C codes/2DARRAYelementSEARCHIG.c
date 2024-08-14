//two dimensional array element searching
#include <stdio.h>
int main(){
    int i,j,m,n,a[100][100],item,count=0;
    printf("enter the size of row and column");
    scanf("%d%d",&m,&n);
    printf("enter array elements");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
  printf("enter an item to search");
  scanf("%d",&item);
  for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(item==a[i][j]){
                   printf("item found at position %d-%d",i,j);
               count++;
            }
        }
    }
if(count==0){
 printf("item not found");
            }





}