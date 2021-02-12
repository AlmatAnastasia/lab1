//Задание 4
#include <stdio.h>
#include <math.h>

void function(void);
double result, x = 1;
//функция main
void main()
{   
    function();
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", result);
    printf("Write\n\n");
    printf("x = ");
    scanf("%lf", &x);
    function();
    printf("f = %.4lf", result);
}
//функция без возвращаемого значения и без параметров
void  function(void)
{
    result = 2 * pow(sin(2 * M_PI - (2 * x)), 2) * pow(cos(5 * M_PI + (2 * x)), 2);
}