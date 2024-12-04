#include<stdio.h>
int swap();
int main()
{
int x,y;
printf("enter the values of x and y\n");
scanf("%d%d",&x,&y);
swap(x,y);
printf("x=%d,y=%d",y,x);
}
int  swap() 
{ 
int a,b;
int temp=a;
a=b;
b=temp;
}

