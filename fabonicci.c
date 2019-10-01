#include<stdio.h>
int main()
{
  int i,j,t=0,t2=1,next;
  printf("enter no");
  scanf("%d",&j);
  for(i=1;i<=j;++i)
  { if(i<=1)
    printf("%d",t);
    next=t+t2;
    t=t2;
    t2=next;
  }
  printf("%d",next);


  return 0;
}
