// A program to find the length of string without using string handling functions

#include<stdio.h>
int main () 
{
  int i=0, count=0;
  char name[]="Sabin Shrestha";
    while(name[i]!='\0'){
      count++;
      i++;
    }

printf("The length of string is %d", count);
return 0;
}