/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

int main(void) {
  printf("\nYuto Kawahara\n");
  int number;
  srand(time(0));
  number = rand()%5 + 5;
  printf("Number = %4d\n", number);
  printf("\nShape A\n");

  for (int row = 0; row <= number; row++) 
  {
  printf("  ");
  for (int col = 0; col <= row; col++)
      printf("* ");
  printf("\n");

  }
  //print shape B
  printf("\nShape B\n");
  for (int row = 0; row <= number; row++)
  {
      printf("  ");
      for (int col = 0; col <= number - row; col++)
          printf("* ");
      for (int col = 0; col <= row; col++)
          printf("  ");
      printf("\n");
  }
  printf("\nShape C\n");
  for (int row = 0; row <= number; row++)
  {
    for (int col = 0; col <= number - row; col++)
        printf("  ");
    for (int col = 0; col <= row; col++)
        printf("* ");
    printf("\n");
  }
  printf("\nShape D\n");
  for (int row = 0; row <= number; row++) 
  {
    for (int col = 0; col <= row; col++)
          printf("  ");
    for (int col = 0; col <= number - row; col++)
      printf("* ");
    printf("\n");

  }
  //print shapeD
  printf("\nShape E\n");
  for (int row = 0; row <= number; row++)
  {
    for (int col = 0; col <= row; col++)
        printf("  ");
    printf("* ");
    printf("\n");
  }
  //print Shape F
  printf("\nShape F\n");
  for (int row = 0; row <= number; row++) 
  {
    for (int col = 0; col <= number - row; col++)
          printf("  ");
    printf("* ");
    printf("\n");

  }
  printf("Yuto Kawahara");
}
