#include <stdio.h>
#include<string.h>
void main(){

  char s[30],r[30];
  int len,i,k,j,e;
  printf("enter a string");
  scanf("%s",s);
  strcpy(r,s);

 len=strlen(s);
 j=len-1;
while(i<j)
{
    e=s[i];
    s[i++]=s[j];
    s[j--]=e;
    
}
    printf("%s\t",s);
  if(strcmp(r,s)==0){
      printf("palindrome");
  }
  else{
      printf("not palindrome");
  }
  
}