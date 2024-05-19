#include <stdio.h>
int main (){
  int i, fibC=1, fibP=0, fibN;
  printf("%d\t%d\t",fibP,fibC);
  for (i=1; i<=20; i++)
  {
fibN=fibC+fibP;
fibP=fibC;
fibC=fibN;
printf("%d\t",fibN);

  }
  return 0;
}