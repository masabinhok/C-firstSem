#include <stdio.h>
int main (){
  int i,n;
  printf("enter an unsigned integer");
  scanf("%d",&n);
  getchar();
  for (i=1; i<=n; i++)
  {
  printf("%d\n",i);
  }
  for (i=n; i>=1; i--)
  {
    printf("%d\n",i);
  }
  return 0;
}