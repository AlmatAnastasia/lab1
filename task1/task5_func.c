// Задание 5, 2 файл
#include <stdio.h>
#include <math.h>

//функция с параметрами, организующая вычисления 
double function(double x)
{
    return  2 * pow(sin(2 * M_PI - (2 * x)), 2) * pow(cos(5 * M_PI + (2 * x)), 2);
}