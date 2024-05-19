#include <stdio.h>
int main ()
{
  int n, i,r ;
  printf("enter an unsigned integer : ");
  scanf("%d",&n);
  for (i=1; i<=10; i++){
  
  r=n*i;
  printf("%d * %d = %d\n",n,i,r);
}
  return 0;
}