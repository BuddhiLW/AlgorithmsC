#include <stdio.h>

main() {
  int a, b, t;

  t = 0;
  a = 10.0;
  b = 20.0;
  printf("Initial:\t a=%d \t b=%d \t\n", a, b);

  t = a;
  printf("Step1:(t := a) \t a=%d \t b=%d \t t=%d \n", a, b, t);
  a = b;
  printf("Step2:(a := b) \t a=%d \t b=%d \t t=%d \n", a, b, t);
  b = t;
  printf("Final:(b := t)\t a=%d \t b=%d\n", a, b);
}
