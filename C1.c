#include<stdio.h>
int main()
{
int num, reversednumber=0,remainder;
printf("Enter the integer:");
scanf("%d",&num);
while(num!=0)
{
remainder=num%10;
reversednumber=reversednumber*10+remainder;
num/=10;
}
printf("Reversed Number=%d",reversednumber);
return 0;
}
