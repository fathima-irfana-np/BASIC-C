#include <math.h>
#include <stdio.h>
int main(){
    int i;
    double t,s=0;
    printf("the series is;\n");
    printf("--------------------------------\n");
    for(i=1;;i++){
        t=1/pow(i,i);
        if(t<0.0001){
            break;
        }
        printf("(1/%d)^%d=%f\n",i,i,t);
        s=s+t;
        }
        printf("%e is the sum",s);
    }
    
    
    
    
