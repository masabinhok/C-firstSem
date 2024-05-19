#include <stdio.h>
int main (){
  int i,n,s=0;
  printf("enter an unsigned integer");
  scanf("%d",&n);
  for (i=0; i<=n; i++)
{
if (i%2==0)
s=s+i;
}
printf("the sum of even numbers is : %d", s);
return 0;
}