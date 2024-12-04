#include<stdio.h>
int avg(int[],int);
int main()
{
int marks[10]={10,20,305,60,70,78,32,54},size,average;
size=sizeof(marks)/sizeof(marks[0]);
average=avg(marks,size);
printf("average=%d\n",average);
}
int avg(int marks[],int size){
int i, average=0,sum=0;
for(i=0;i<size;i++)
{sum=sum+marks[i];
}
average=sum/size;
return average;}














