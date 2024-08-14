
void irfana(int,int);
int main()
{
   int num2,num1;
   printf("enter two numbers for substraction");
   scanf("%d%d",&num2,&num1);
   irfana(num2,num1);

   return (0);
}

void irfana(int num1,int num2)
{
     
     int answer;
     answer=num2-num1;
     printf("%d",answer);
}




