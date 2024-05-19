#include <stdio.h>
#include <string.h>

int main () 
{
  FILE *fptr;
  char str[1000];
  fptr=fopen("string.txt","w");
  if(fptr==NULL){
    perror("Error opening file");
    return 1;
  }

  else{
    printf("File created successfully\n");
    printf("Write in the file!\n");
      gets(str);
      fputs(str, fptr);
      fclose(fptr);
  }

  fptr=fopen("string.txt", "r");
  if(fptr==NULL){
    perror("Error opening file");
    return 1;
  }
  else{
    printf("File opened successfully!\nThe content in the file is:\n");
    fgets(str,100, fptr);
    printf("%s",str);
    fclose(fptr);
  }

  return 0;
}

