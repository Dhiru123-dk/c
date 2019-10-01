#include<stdio.h>
int *build_array();
int main()
{
    int *a,k;
    a=build_array();
    for(k=0;k<5;k++)
    printf("%d",a[k]);
    return 0;
}
 int *build_array()
 {
     int k,*a;
   static int tab [5];
   printf("enter the element");
   for(k=0;k<5;k++)
    scanf("%d",tab[k]);

      return (k);
 }
