#include <stdio.h>

int main()
{    
    int j,n,i;
    printf("enter a number for pattern");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);