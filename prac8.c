#include<stdio.h>
int main()
{ int a,b,c;
  char op;
printf("enter the values of a&b:");
scanf("%d%d",&a,&b);
printf("+:addition,-:subtraction,*:multiplication,/:division");
printf("enter a:\n");
scanf("%d",&a);
printf("enter b:\n");
scanf("%d",&b);
printf("enter the operators:\n");
scanf("%c",&op);
switch(op)
{
case '+':c=a+b;
printf("the result:%d",c);
       break;
case '-': c=a-b;
printf("the result:%d",c);
       break;
case '*': c= a*b;
printf("the result:%d",c);
       break;
case '/': c=a/b;
printf("the result:%d",c);
       break;
default :
printf("the op is not available");
}
}


