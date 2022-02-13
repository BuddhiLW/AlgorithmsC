#include <stdio.h>

main() {
  int a, b, t;

  t = 0;
  a = 10.0;
  b = 20.0;
  printf("Initial:\t\t a=%d \t b=%d \t\n", a, b);

  a = a + b;
  printf("Step1:(a := a + b) \t a=%d \t b=%d \n", a, b, t);
  b = a - b;
  printf("Step2:(b := a - b) \t a=%d \t b=%d \n", a, b, t);
  a = a - b;
  printf("Final:(a := a - b)\t a=%d \t b=%d\n", a, b);
}
