#include<stdio.h>
int sum(int ,int );
int main()
{ int a,b;
printf("enter the values of the a and b\n");
scanf("%d%d",&a,&b);
sum(a,b);
}
int sum(int a, int b)
{
int s;
s=a+b;
printf("sum is:%d",s);
}


