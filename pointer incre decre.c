#include<stdio.h>
int main()
{
int a=40,*ptr=&a;
printf("%d\n",a);
printf("%d\n",ptr);
printf("%d\n",*ptr);
*ptr=22;
printf("%d\n",a);
ptr++;
printf("%d\n",ptr);
ptr--;
printf("%d\n",ptr);
printf("%d\n",ptr+5);
}
