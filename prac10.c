#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("enter the value of n:");
scanf("%d",&n);
do
{
sum=sum+i;
i=i+1;}
while(i<=n);
printf("the sum:%d",sum);

}

