// Задание 6, 2 файл
#include <stdio.h>
#include <math.h>

double result, x = 1;
//функция без возвращаемого значения и без параметров
void  function(void)
{
    result = 2 * pow(sin(2 * M_PI - (2 * x)), 2) * pow(cos(5 * M_PI + (2 * x)), 2);
}