#include<stdio.h>
void main()
// factorial
{
int i=1,n,sum=1;
printf("enter the value of n:");
scanf("%d",&n);
while(i<=n)
{
sum = sum*i;
i=i+1;}
printf("the sum:%d\n",sum);
}

