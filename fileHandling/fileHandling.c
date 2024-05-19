#include <stdio.h>
int main () {

  FILE *fptr;
  fptr = fopen("new.txt","w");

  if(fptr==NULL){
    perror("Error Opening File");
    return 1;
  }

  fclose(fptr);
  return 0;
}