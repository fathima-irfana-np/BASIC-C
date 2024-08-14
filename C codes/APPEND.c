#include <stdio.h>
int main(){

//append two array
int i,j,m,n,c[40],a[20],b[20];
printf("enter the size of array");
scanf("%d",&m);
printf("enter the elements of array");

for(i=0;i<m;i++)
{
    scanf("%d",&a[i]);
}
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of array");

for(j=0;j<n;j++)

{
    scanf("%d",&b[j]);
}
for(i=0;i<m;i++){
    c[i]=a[i];
}
for(j=0;j<n;j++){
    c[j+m]=b[j];
}
for(i=0;i<m+n;i++){
    printf("%d",c[i]);}

}