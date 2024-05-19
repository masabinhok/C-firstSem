#include <stdio.h>
int main ()
{
int n, on, r,s=0,t ;
printf("enter an unsinged integer : ");
scanf ("%d",&n);
on=n;
while (on!=0)
{
  r=on%10;
  s+=r*r*r;
on/=10;
}
if (n==s)
printf("Entered usigned integer is an armstrong number");
else 
printf("entered unsigned integer is not an armstrong number");
return 0;


}