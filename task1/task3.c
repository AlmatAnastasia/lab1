//Задание 3
#include <stdio.h>
#include <math.h>

double function(double x);
//функция main
void main()
{   
    double f, x = 1;
    f = function(x);
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", f);
    printf("Write\n\n");
    printf("x = ");
    scanf("%lf", &x);
    f = function(x);
    printf("f = %.4lf", f);
}
//функция с параметрами, организующая вычисления 
double function(double x)
{
    return  2 * pow(sin(2 * M_PI - (2 * x)), 2) * pow(cos(5 * M_PI + (2 * x)), 2);
}