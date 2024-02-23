// Enter the three numbers and swap it.

#include<stdio.h>

int main()

{
  int a,b,c;
  printf("enter a theree numbers\n");
  scanf("%d%d%d",&a,&b,&c);
//before swapping
printf("a is: %d\nb is: %d\nc is:%d",a,b,c);

  a=a+b+c;
  b=a-b-c;
  c=a-b-c;
  a=a-b-c;
  //after swapping
  printf("\na is: %d\nb is: %d\nc is:%d",a,b,c);
  return 0;
}