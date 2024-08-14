#include <stdio.h>
int main(){

int count=0;
int i,j,m,a[80];
//element searching
printf("enter the size of the array");
scanf("%d",&m);
printf("enter the elements");
for(i=0;i<m;i++){
    scanf("%d",&a[i]);
}
printf("enter item to search");
scanf("%d",&j);
for(i=0;i<m;i++){
    if(j==a[i]){
        count=1;
    }
}
if(count==0){
    printf("item not found");
}else{
    printf("item found");
}






}