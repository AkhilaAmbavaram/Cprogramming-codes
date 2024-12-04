#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
float r1,r2,imaginary,discriminant;
printf("enter the value 'a' of quadratic equation:");
scanf("%f",&a);
printf("enter the value of b in equation:");
scanf("%f",&b);
printf("enter the value of c in the equation:");
scanf("%f",&c);
discriminant=b*b-4*a*c;
switch(discriminant>0)
{
case 1:
r1=(-b + sqrt(discriminant))/2*a;
r2=(-b - sqrt(discriminant))/2*a;
printf("real and distinct roots:%f%f\n"r1,r2);
break;
case 0:
break;
switch (discriminant<0)
{
case 1: 
r1=r2=-b/2*a;
imaginary=sqrt(-discriminant)/2*a;
printf("imaginary roots");
break;
case 0:
r1=r2=-b/2*a;
printf("real and equal roots");
break;
}
default :
printf("choice is not available");

}

}

 
