#include <stdio.h>
#include <string.h>
int main(){
    //no of words of a sentences
    //this is code
          int i,count=1;
          char s[100];

    printf("enter a sentence");
    for(i=0;i<=11;i++){
        scanf("%c",&s[i]);
    }
 if(s[0]==' '||s[0]=='\t')
     count=0;
for(i=0;s[i]!='\0';i++){
    if((s[i]==' '||s[i]=='\t')&&(s[i+1]!=' '||s[i+1]!='\t'&&s[i+1]!='\0'))
    count++;
}
printf("the no. of words is %d",count);
}