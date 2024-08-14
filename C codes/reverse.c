#include<stdio.h>
#include<string.h>
int main(){

int i,j,m,n,len;
char *end,*start,ch;
char s[100];
printf("enter a string");
gets(s);
len=strlen(s);
end=s;
start=s;
for(i=0;i<len-1;i++){
    end++;
}
for(i=0;i<len/2;i++){
     ch=*start;
     *start=*end;
     *end=ch;
     start++;
     end--;
}
puts(s);








}