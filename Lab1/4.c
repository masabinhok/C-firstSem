#include <stdio.h>
int main ()
{

int radius, circumference, area, pi=3.14;
printf("Enter the radius of the circle : ");
scanf("%d", &radius);
circumference=2*pi*radius;
area=pi*radius*radius;
printf("The circumference of the circle is : %d\n", circumference);
printf("The area of the circle is : %d", area);


return 0;
}