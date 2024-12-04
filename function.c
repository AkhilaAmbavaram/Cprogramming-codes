int main()
{
int a,b,c,largest_num;
printf("enter the numbers:\n");
scanf("%d%d%d",&a,&b,&c);
largest_num=largest_number(a,b,c);
printf("%d is the largest number",largest_num);
}
int largest_number(int n1, int n2, int n3) {
 if (n1>=n2 && n1>=n3)
   return n1;
 else if (n2>=n1 && n2>=n3)
   return n2;
 else
   return n3;
   }
