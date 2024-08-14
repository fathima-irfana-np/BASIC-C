//base conversuin of numbers
#include <stdio.h>
#include <string.h>

int main(){

     int b[3]={2,8,16},n,i,j,x,a;
     char s[29],r[16]={"0123456789ABCDEF"};

     printf("enter a decimal");
      scanf("%d",&n);
for(i=0;i<3;i++){
        j=0;
        x=n;
        while(x>0){
            a=x%b[i];
            s[j]=r[a];
            j++;
            x=x/b[i];
        }
        s[j]='\0';

switch(i){
case 0:
printf("binary equivalent is %s\n",strrev(s));
break;
case 1:
printf("octal equivalent is %s\n",strrev(s));
break;
case 2:
printf("hexadecimal equivalent is\n %s",strrev(s));
break;
}
    }}