#include <stdio.h>
#include <string.h>
void main() {
    char s[100],r[100];
    int i,j,tmp,len;
        printf("enter a string");
        scanf("%s",s);
 len=strlen(s);
 j=len-1;
        for(i=j;i>=0;i--){
    printf("%c",s[i]);
        }

}