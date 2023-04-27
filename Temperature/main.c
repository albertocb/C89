/* Using C89 (ANSI C)*/
/* gcc -Wall -std=C89 (or -ansi) -o binary_name */

/* Program converts Celcius to Fahrenheit*/
/*     C = (5/9)(F-32)     */
/* for fahrenheit table = 0..300 , step every 20 degrees*/

#include <stdio.h>

int main() 
{
    double fahrenheit = 0;
    double celcius = 0;
    
    int lower_limit_table = -100;
    int upper_limit_table = 300;
    int step_size = 20;

    fahrenheit = (double)lower_limit_table;

    printf("Fahrenheit   Celcius -> Celcius   Fahrenheit\n");

    while (fahrenheit <= upper_limit_table) {
        celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("%.1f\t     %6.2f\t %6.2f\t  %.1f\n", fahrenheit, celcius, celcius, fahrenheit);
        fahrenheit = fahrenheit + (double)step_size;
        /*fahrenheit += step;*/
    }

    
    printf("\n\n");
    printf("Celcius   Fahrenheit\n");
    
    celcius = (double)lower_limit_table;
    
    /* Recalculate, with same values as fahrenheit, but mirror*/
    /*   F = 32 + C(9/5)   */

    while (celcius <= upper_limit_table) {
        fahrenheit = 32.0 + celcius * ( 9.0 / 5.0);
        printf("%.1f"  "\t     "  "%6.2f \n", celcius, fahrenheit);
        celcius = celcius + (double)step_size;
    }
    

    return 0;
}