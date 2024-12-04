#include<stdio.h>
int main()
{int arr[9]={1,3,2,4,5,6,7,8,9},i,n;
printf("original array:\n");
for(i=0;i<9;i++)
{printf("%d",arr[i]);
}
printf("reverse array:\n");
for(i=9-1;i>=0;i--)
{
printf("%d",arr[i]);
}
}

