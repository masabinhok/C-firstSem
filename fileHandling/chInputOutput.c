#include <stdio.h>

int main () {
  FILE *fptr;
  char c;

fptr= fopen("abc.txt", "w");
  if(fptr==NULL){
    printf("File cannot be opened!");
    return 1;
  }
  
  else{
    printf("File created successfully!\n");
    printf("Enter the text till enter key is hit\n");
    do{
      c =getchar();
      fputc(c, fptr);
    }while(c!='\n');
  }

  fclose(fptr);

  fptr= fopen("abc.txt", "r");
  if(fptr==NULL){
    printf("File cannot be opened!");
    return 1;
  }


  printf("The content from file is \n");
  while((c=fgetc(fptr))!=EOF)
  {
    putchar(c);
  }
fclose(fptr);
return 0;


}