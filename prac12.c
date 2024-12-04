#include<stdio.h>
int main()
{
float a,b,c;
int choice;
printf("enter the values of a&b\n");
scanf("%f%f",&a,&b);
printf("1:add,2:sub,3:multi,4:div\n");
printf("enter a:");
scanf("%f",&a);
printf("enter b:");
scanf("%f",&b);
printf("enter your choice/choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1: c= a+b;
printf(" the result: %f\n",c);
break;
case 2: c=a-b;
printf(" the result: %f\n",c);
break;
case 3: c=a*b;
printf(" the result: %f\n",c);
break;
case 4: c=a/b;
printf("the result: %f\n",c);
break;
default :
printf("the choice is not available");
}
}
