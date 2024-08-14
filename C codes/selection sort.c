#include <stdio.h>
int main()
{
 int n,i,j,a[100];
 int temp,min;
printf("enter the size of array");
scanf("%d",&n);

printf("enter elements");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}


for(i=0;i<n;i++){
    min=i;
    for(j=i+1;j<n;j++){
    if(a[min]>a[j]){
        min=j;
    }
    if(min!=i){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}





printf("elements in the sorted order");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}




















}