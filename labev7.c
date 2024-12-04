#include<stdio.h>
int sum();

int main()
{ int s;
s= sum();

printf("%d",s);
}
int sum(){
int a,b,sum;
printf("enter the values of a and b\n:");
scanf("%d%d",&a,&b);
sum=a+b;
return sum;
}


