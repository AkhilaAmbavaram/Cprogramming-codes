#include<stdio.h>
int fabonacci(int);
int main()
{int n;
printf("enter the value of n\n:");
scanf("%d",&n);
fabonacci(n);
}
int fabonacci(int n)
{
int a=0,b=1,next;
printf("fibonacci series:");
int i;
for(i=0;i<=n;i++){
printf("%d",a);
next=a+b;
a=b;
b=next;
}
printf("\n");
}


