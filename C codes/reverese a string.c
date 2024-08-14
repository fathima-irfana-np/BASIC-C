#include <stdio.h>
#include <string.h>
void main() {
    char s[100];
    int i,j,tmp,len;
        printf("enter a string");
        scanf("%s",s);
 len=strlen(s);
 
 
  j=len-1;
 while(i<j){
     tmp=s[i];
     s[i++]=s[j];
     s[j--]=tmp;
      // allenkil j-- um i++ um thazhe ivide veruthe ; ingane ezhuthuka []nte ullilathe
 }printf("new string is %s",s);
    
}