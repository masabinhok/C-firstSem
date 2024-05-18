/*
Counter controlled and sentinal controlled loops are two common types of loops used in programming, especially in languages like C.

Counter Controlled Loop:
In a counter controlled loop, the number of iterations is predetermined based on a counter variable. The counter variable is initialized before the loop starts, and then it is incremented or decermented with each iterations until the termination condition is satisfied.
for eg: for loops
*/


/*
Sentinal Controlled Loop:
In a sentinal controlled loop, the loop continues until a sentinal value is encountered. The sentinal value marks the end of the loop and is typically determined by user input or some other external condition. Unlike counter controlled loops, the number of iterations depends on the input or condition. 
for eg: while loops, where the loop continues until a certain condition becomes false.
*/


//Examples

// #include <stdio.h>

// int main (){
//   for (int i=0; i<5; i++){
//     printf("%d\t",i);
//   }
//   printf("\n");
//   int num=10;
//   while(num!=0)
// {
//   printf("%d\t",num);
//   num--;
// }
// }

//Armstrong number in a certain range

#include <stdio.h>
#include <math.h>

int main (){
  int p,q,num, remainder,result=0;
  printf("Enter P: \n");
  scanf("%d",&p);
  printf("Enter Q: \n");
  scanf("%d",&q);

  printf("The armstrong numbers between %d and %d are: \n",p,q);
  for(int i=p; i<q; i++){
    int count=0;
    int temp =i;
    result=0;

    while (temp!=0){
      temp/=10;
      ++count;
    }

    temp=i;
    while(temp!=0){
      remainder = temp%10;
      result+=pow(remainder,count);
      temp/=10;
    }

if(result==i){
  printf("%d\t",i);
}
  }
  return 0;
}

