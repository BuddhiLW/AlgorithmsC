#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, . .., 300; floating-point version */
main()
{
    float fahr, Celsius;
    int lower, upper, step;
    lower = 0 ;  /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20 ;  /* step size */
    Celsius = lower;

    printf("----------- \t --------\n");
    printf("Celcius \t Fahrenheit\n");
    printf("----------- \t --------\n");

    while (Celsius <= upper) {
        fahr=(9.0/5.0)*Celsius + 32;
        printf ("%3.0f %6.1f\n", Celsius, fahr);
        Celsius = Celsius + step;
    }
}
