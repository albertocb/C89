/* Section 1.3 book C K&R*/
/* for loop*/

#include <stdio.h>

/* Print Fahrenheit - Celsius table */
int main ()
{
    int fahrenheit = 0;

    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit +20)
        printf("%3d %6.1f\n", fahrenheit, ( 5.0 / 9.0 ) * (fahrenheit - 32));

    return 0;
}