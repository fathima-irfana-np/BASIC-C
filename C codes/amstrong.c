#include <stdio.h>
int main(){
 
 int n,r,x,i,s=0;
 //checking amstrong or not
 printf("enter a number");
 scanf("%d",&n);
 x=n;
while(n>0){
 
    r=n%10;
       n=n/10;
       s=s+(r*r*r);

 }if(x==s){
    printf("amstrong");
}else{
    printf("not amstrong");
}


}