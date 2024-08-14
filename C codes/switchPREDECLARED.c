#include <stdio.h>
int main(){

int num;
printf("enter \t1 for pappaya \t 2 for apple\t 3 for pineapple \t4 for guava");
scanf("%d",&num);
switch(num){
    case 1:
    printf("you pressed for pappaya");
    break;
    case 2:
    printf("you pressed for apple");
    break;
    case 3:
    printf("you pressed for pineapple");
    break;
     case 4:
    printf("you pressed for guava");
    break;
    default:
printf("invalid input");

}

}