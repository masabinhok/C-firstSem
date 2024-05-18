/*
In C, outputs can be classified into two main categories: formatted and unformatted. The difference between them lies in how they handle the presentation of data.

FORMATTED OUTPUTS
Formatted outputs provide a way to control the presentation of the data being displayed. This includes specifying how numbers, characters, and strings should appear, and how much space they should occupy. The printf function from the standard i/o library <stdio.h> is commonly used for formatted outputs.

CHARACTERSTICS

1. Control over Appearance
2. Format Specifiers
3. Enhanced Readability
*/

  /*
    UNFORMATTED OUTPUTS
    Unformatted outputs, on the other hand, do not provide control over the format of the data. They are simpler and used for direct output of data without any formatting. Functions like puts, putchar from <stdio.h> are examples of unformatted outputs functions.

    CHARACTERSTICS

    1. No control over appearance
    2. Simpler to use
    3. Less readability
  */



//Example

#include <stdio.h>
  int main () {
    char ch ='A';
    char name[20] = "Sabin Shrestha";
    float age= 18.8991;

    printf("%.5s\n",name); // prints only first 5 characters
    printf("%.2f\n",age); // prints upto 2 decimal points

    puts(name); //string output
    putchar(ch); // single character output
  }
