#include<stdio.h>
int main()
{
Int arr [100],n, search, i;
Printf ("Enter the number of element:"); scanf("%d",&n);
printf("Enter %d integer:\n",n); for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the number of search:"); scanf("%d",&search);

for(i=0;i<n;i++)
{
if(arr[i]==search)
{
printf("%d is present at position %d.\n",search,i+1); break;
}
}
if(i==n)
{
printf("%d is not present in the arry.\n",search);
}
return 0;
}
