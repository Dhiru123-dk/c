#include<stdio.h>
int main()
{
  int *x,i;
  int a[5]={-1,-3,-4,-5,-6};
  x=&a[2];
  for(i=0;i<3;i++){
  printf("%d",x[i]);
}
for(i=0;i<=5;i++)
{
 printf("\n%d",a[i]);
}
}
