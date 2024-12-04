#include<stdio.h>
int sum();
int main(){
sum();
}
int sum(){
int a,b,sum;
printf("enter the numbers a and b:\n");
scanf("%d%d",&a,&b);
sum=a+b;
printf("%d",sum);
}
