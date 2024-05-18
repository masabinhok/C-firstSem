
//Using Nested loop, print:
/*
5
44
333
2222
11111
*/

#include <stdio.h>

int main(){
  for(int i=5; i>0; i--){
    for(int j=5; j>=i; j--){
      printf("%d\t",i);
    }
    printf("\n");
  }
  return 0;
}