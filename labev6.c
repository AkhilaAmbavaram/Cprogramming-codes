#include<stdio.h>
int diff();
int main(){
diff();
}
int diff(){
int a,b,diff;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
diff=a-b;
printf("the difference of a and b is:%d",diff);
}


