#include<stdio.h>
int main()
{
 int a,b;
 printf("enter two numbers");
 scanf("%d %d ",&a,&b);
 if(a>b)
  {
   printf("number1 is greater");
  }
 else if(a<b)
  {
   printf("number2 is greater");
  }
 else
  {
   printf("number1 is equal to number2");
  }
}
