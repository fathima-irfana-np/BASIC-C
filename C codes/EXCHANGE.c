#include <stdio.h>
int main(){
int i,j,m,n,a[100];
int temp;
printf("enter the size of  first array");
scanf("%d",&m);
printf("enter the size of array");
for(i=0;i<m;i++){
    scanf("%d",&a[i]);
}
//arranging elements off array to lowest to highest
printf("arranged elements of array");

for(i=0;i<m;i++){
for(j=i+1;j<m;j++){
 if(a[i]>a[j]){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
 }
}}

for(i=0;i<m;i++){
    printf("%d",a[i]);
}








}