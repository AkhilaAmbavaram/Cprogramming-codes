#include<stdio.h>
int main()
{ int arr[6]={1,3,5,6,9,7};
int max=0,i;
for (i=0;i<=6;i++)
{
if(arr[i]>max)
{max=arr[i];}
}
printf("maximum element %d\n",max);
}


