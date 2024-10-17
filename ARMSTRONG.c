#include<stdio.h>
int main()
{
int n,t,rem,arm=0;
printf("Enter the number:");
scanf("%d",&n);
t=n;
while(n>0)
{
rem=n%10;
arm=(rem*rem*rem)+arm;
n=n/10;
}
if(t==arm)
{
printf("%d is armstrong number",arm);
}
else
{
printf("%d is not a armstrong number",arm);
}
return 0;
}
