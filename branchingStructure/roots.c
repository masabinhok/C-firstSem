#include <stdio.h>
#include <math.h>

int main ()
{
int a, b, c, det, w, x, y,z;
printf("ENter the coefficient of the equation a, b, c: ");
scanf("%d%d%d",&a, &b, &c);

det=pow(b,2)-(4*a*c);

if(det==0)
{
w=-b/a;
printf("the real and equal roots are %d and %d",w,w);

}

else if ( det>0)
{
x=(-b+sqrt(det))/(2*a);
y=(-b-sqrt(det))/(2*a);
printf("The real and unequal roots are %d and %d",x,y);

}

else 
{
  det*=-1;
  w=-b/2*a;
  y=sqrt(det)/(2*a);
  printf("the imaginary roots are %d+%di and %d-%di",w,y,w,y);

  
}
return 0;
}