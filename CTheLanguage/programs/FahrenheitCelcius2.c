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
    fahr = lower;

    printf("----------- \t --------\n");
    printf("Fahrenheit \t Celcius \n");
    printf("----------- \t --------\n");

    while (fahr <= upper) {
        Celsius = (5.0/9.0) * (fahr-32.0);
        printf ("%3.0f %6.1f\n", fahr, Celsius);
        fahr = fahr + step;
    }
}