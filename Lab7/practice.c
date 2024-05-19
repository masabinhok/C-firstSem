#include <stdio.h>
#include <math.h>

void checkprime ();
void checkprime (){
  int x,i;
  int is_prime=1;
  printf("enter a number : ");
  scanf("%d", &x);
  
  if (x <=1)
  {
    printf("Neither prime nor composite.");
    return;
  }

  for (  i=2; i<=sqrt (x); i++);
  {
    if (x % i==0)
    {
      is_prime = 0 ;
      break;
    }

  }
    if(is_prime){
      printf("Prime\n");}
     else {
      printf("Composite\n");
      
    }

}

int main ()
{
checkprime ();
return 0;
}