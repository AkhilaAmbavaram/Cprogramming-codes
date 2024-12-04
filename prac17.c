#include<stdio.h>
#include<math.h>
// swapping of two numbers
int main()
{
int n,sum=0,c;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{ sum=(sum*10)+n%10;
n=n/10;
}
printf("%d",sum);
}
