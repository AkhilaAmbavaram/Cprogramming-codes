#include<stdio.h>
int diff(int,int);
int main()
{
int a,b,d;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
d=diff(a,b);
printf(" difference is:%d",d);
}
int diff(int a, int b)
{
int d;
d=a-b;
return d;
}

