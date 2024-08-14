 
int pandi(int,int);
 int main()
 {
     int num1,num2,ans;
      printf("enter two numbers for substraction");
      scanf("%d%d",&num2,&num1);
      ans=pandi(num2,num1);
      printf("%d",ans);

      return (0);
 }

 int pandi(int num1,int num2)
 {
       int ans;
       ans=num1-num2;
       return ans;
 }