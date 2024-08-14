#include <stdio.h>

int main()
{    
    int j,n,i;
    printf("enter a number for normal counting pattern");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("\t%d",j);
        }  printf("\n");
    }
//  changing the i and j together causes different outputs
    return 0;
}