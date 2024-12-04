#include<stdio.h>
int main()
{
int arr[9]={10,20,30,30,40,50,60,70,80},key=30,found=0,i;
for(i=0;i<=9;i++)
{if(arr[i]==key)
{printf("the element %d is found %d\n",key,i);
found=1;
break;
}
}
if (!found){
printf("element %d Sis not found\n",key);
}
}

