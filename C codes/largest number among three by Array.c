  #include <stdio.h>
int main(){

        int array[3];
        int i,j;
        int temp;
        printf("enter 3 numbers");

        for(i=0;i<=2;i++){
            scanf("%d",&array[i]);
        }

        for(i=0;i<3-1;i++){
            for(j=i+1;j<3;j++){
            if(array[i]>array[j]){
               temp=array[i];
               array[i]=array[j];
               array[j]=temp;
            }
            
        }
           
        }
            printf("%d is greatest",array[i]);
         
}
