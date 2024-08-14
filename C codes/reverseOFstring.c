#include <stdio.h>
#include <string.h>
int main(){

char s[100];
int i,j,m,n,len;
char *str;

printf("enter a string");
gets(str);
len=strlen(str);

printf("reverse of the string is   \t");
for(i=len;i>=0;i--){
    printf("%c",*(str+i));
}





}