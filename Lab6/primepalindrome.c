#include <stdio.h>

int main()
{
  int i,j, n1, n2, c=0, d=0, s=0;
  printf("Enter n1 and n2 : ");
  scanf("%d %d", &n1, &n2);

printf("The prime numbers are : \n");
if(n1<n2)

{
  for(i=n1; i<=n2; i++)
  {
   int  factor=0;
   for (j=1; j<=i; j++)
   {
    if(i%j==0)
    factor+=1;
   }
   if(factor<=2)
   {
    printf("%d \n", i);
  
    c++;
   }

  }
  printf("and the number of prime numbers is %d \n",c);
  printf("The palindrome numbers are : \n");
 
for (int k = n1; k <= n2; k++)
        {
            s = 0;
            int temp = k;
            int rev = 0;
            while (temp != 0)
            {
                int r = temp % 10;
                rev = rev * 10 + r;
                temp = temp / 10;
            }
            if (rev == k)
            {
                printf("%d\n", k);
                d++;
            }
        }
 printf("and the number of palindrome number is %d", d);
}


else printf("Invalid Error !");
return 0;

}