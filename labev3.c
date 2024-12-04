#include<stdio.h>
int factorial(int n);
int main()
{
int number;
printf("enter the number:\n");
scanf("%d",&number);
factorial(number);
printf("%d",factorial(number));
}
int factorial(int n)
{ if (n==0)
return 1;
else
return n*factorial(n-1);
}

