#include<stdio.h>
int main()
//fibonacci of numbers
{
int n;
int t1=0,t2=1;
int nextTerm=t1+t2;
printf("enter the number of terms:");
scanf("%d",&n);
printf("fibonacci series:%d,%d,",t1,t2);
nextTerm=t1+t2;
while(nextTerm<=n)
{
printf("%d,",nextTerm);
t1=t2;
t2=nextTerm;
nextTerm=t1+t2;}
}
