#include <stdio.h>
int main (){
  int i, n, factor1=0, factor2=0, factor3=0;
  printf("enter an unsigned integer : ");
  scanf("%d",&n);
  for (i=1; i<=n; i++)
  {
    
    if (n%i==0){
      
    factor1=factor1+1;
    }
    if ((n+2)%i==0)
    {
      factor2+=1;
    }
    if((n-2)%i==0){
    factor3+=1;}

}
if (factor1<=2 && factor2<=2 )
{
printf("the number %d is a twin prime and its twin prime is %d ",n,n+2);
}
else if (factor1<=2 && factor3<=2)
{
printf("the number %d is a twin prime and its twin prime is %d ",n,n-2);
}
else 
{
  printf("The number is not a twin prime. A twin prime refers to a pair of prime numbers that have a difference of 2. In other words, two prime numbers are considered twin primes if they differ by exactly 2.");
}
return 0;

}