#include<stdio.h>
int fact(int);
int main()
{
int n,r;
printf("enter the value of n:\n");
scanf("%d",&n);
r=fact(n);
printf("factorial of n is:%d",r);
}
int fact(int n)
{
int i;
int f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
