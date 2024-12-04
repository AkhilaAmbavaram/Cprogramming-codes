#include<stdio.h>
int main()
// factorial 
{
int i=1,j=1,n;
printf("enter the number:");
scanf("%d",&n);
while(i<=n)
{ 
j=j*i;
i++;
printf("the result is:%d\n",j);
}
}

