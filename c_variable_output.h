#include <stdio.h>

int main() {
  // Create variables
  int myNum = 15;              // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
// To combine both text and a variable, separate them with a comma inside the printf()
  int myNum1 = 15;
  printf("My favorite number is: %d", myNum1);
  return 0;

  // To print multiple data format in one printfLine
  char myLetter = 'D';
  printf("My number is %d and my letter is %c", myNum1, myLetter);
  return 0;

}