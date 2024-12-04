#include<stdio.h>
int main()
{int a;
printf("the number:\n");
scanf("%d",&a);
if (a%2==0){
printf("the entered value is even\n");
   if (a%6==0)
printf("the number is divisiblr by 6\n");
   else 
printf("the number is not divisible by 6\n");
}
else{
printf("the number is odd\n");
   if(a%5==0)
printf("the number is divisible by 5\n");
   else 
printf("the number is not divisible by 5\n");
}


}
