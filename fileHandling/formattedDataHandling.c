#include <stdio.h>
int main () {
  char name[200];
  int roll;
  float marks;
  FILE *fptr;
  fptr=fopen("formatted.txt","w");
  if(fptr==NULL){
    perror(
    "Error opening file!\n"
    );
    return 1;
  }
  
  else{
    printf("Enter name, roll and marks:\n");
    scanf("%s%d%f", name, &roll, &marks);
    fprintf(fptr,"%s%d%f", name , roll, marks);
    fclose(fptr);
  }


  fptr=fopen("formatted.txt", "r");
  if(fptr==NULL){
  perror("Error opening file!");
    return 1;
  }

  
    printf("File opened successfully!\n");
    printf("The content of the file is: \n");

    fscanf(fptr,"%s%d.%f",name, &roll, &marks);
    printf("%sn\%d\n%f\n", name, roll ,marks );

    fclose(fptr);
  
  return 0;


}