#include<stdio.h>
int swap(int , int);
int main()
{ int a,b;
printf("enter the values of s and b:\n");
scanf("%d%d",&a,&b);
swap(&a,&b);
}
int swap(int a, int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("a=%d,b=%d",a,b);
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 main(){
int x,y;
printf("enter the numbers");
scanf("%d%d",&x,&y);
swap(&x,&y);
printf("x=%d,y=%d\n",y,x);
}
int swap()
{
int a,b;
int temp;
temp=a;
a=b;
b=temp;

}
