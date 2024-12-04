#include<stdio.h>
int main()
{
int a,b,choice;
printf("enter the values of a&b\n");
scanf("%d%d",&a,&b);
printf("1:add,2:sub,3:multi,4:div\n");
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("enter your choice/choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: choice= a+b;
printf(" the result: %d\n",choice);
break;
case 2: choice=a-b;
printf(" the result: %d\n",choice);
break;
case 3: choice=a*b;
printf(" the result: %d\n",choice);
break;
case 4: choice=a/b;
printf("the result: %d\n",choice);
break;
default :
printf("the choice is not available");
}
}
e
