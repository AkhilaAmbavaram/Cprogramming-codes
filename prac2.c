#include<stdio.h>
int main()
{ int a;
//first inner printf statement is printed and then it goes to the outer printf statement in which it prints the number of charcters in the inner printf statement i.e 6
printf("%d",printf("hello\n"));
}
