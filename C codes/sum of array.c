#include<stdio.h>
int main(){

int i,n,x,a;
int sum=0,rev[100];
printf("enter a number");
scanf("%d",&n);
x=n;

for(i=0;i<=x;i++){
    
    a=x%10;
    sum=sum+a;
    rev[i]=a;
    x=x/10;
}

for(i=0;i<3;i++){
    printf("%d",rev[i]);
}
printf("\t\n%d is the sum",sum);


return 0;
}