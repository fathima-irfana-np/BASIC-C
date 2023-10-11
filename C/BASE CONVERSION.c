//base conversion of numbers
//CONVERTION FROM DECIMAL TO OCTAL,BINARY &HEXADECIMAL
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
int e[30];
int s[30];
int m[30];
int digit;
printf("enter decimal");
scanf("%d",&digit);
 int store=digit;
 int z=0;
int i=0;
void hexa(int n)
{   int j=0,i=0,z=0;
    printf("hexa equivalent of %d is =",store);
    while(n!=0){ //>
    z=n%16;      
    s[i]=z;  
    i++;  
    n=n/16;
    }
    for(int j=i-1;j>=0;j--){
        if(s[j]==10){
            printf("A");
        }else if(s[j]==11){
            printf("B");
        }else if(s[j]==12){
             printf("C");           
        }else if(s[j]==13){
            printf("D");            
        }else if(s[j]==14){
             printf("E");           
        }else if(s[j]==15){
                        printf("F");
        }else{
   printf("%d",s[j]);
        }
    }
}      

void binary(int n)
{
    printf("binary equivalent of %d is =",store);
    while(n!=0){ //>
    z=n%2;      
    m[i]=z;  
    i++;  
    n=n/2;
    }
    for(int j=i-1;j>=0;j--){
    printf("%d",m[j]); }
}  
void octal(int n)
{   int j=0,i=0,z=0;
    printf("octal equivalent of %d is =",store);
    while(n!=0){ //>
    z=n%8;      
    s[i]=z;  
    i++;  
    n=n/8;
    }
    for(int j=i-1;j>=0;j--){
    printf("%d",s[j]); }
}      

hexa(digit);
printf("\n");
binary(digit);
printf("\n");
octal(digit);

return 0;
}

