#include<stdio.h>
int main()
{
int marks[6]={20,40,50,60,66,70};
int sum=0,i;
float avg;
for(i=0;i<=6;i++){
 sum= sum+marks[i];
 }
 avg=sum/6;
 printf("%f",avg);
 }

