#include <stdio.h>
int main()
{
  int x, n, i,j,  num, sign=-1, den;
  printf("enter the value of x: ");
  scanf("%d", &x);
  printf("enter the number of terms: ");
  scanf("%d", &n);
  
  for (i=0; i<n; i++)
  {
    sign*=-1;
    den=1; 
    num=1;
    for(j=0; j<i; j++)
    num=pow(-1, i)*pow(x,2*i+1);
    den=(2*i+1);
  }

  
}