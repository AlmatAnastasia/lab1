//Задание 1
#include <stdio.h>
#include <math.h>

void main()
{   
    //для исходных данных, значения которых задать в виде констант в тексте функции main
    double x = 1;
    double f = 2 * pow(sin(2 * M_PI - (2 * x)), 2) * pow(cos(5 * M_PI + (2 * x)), 2);
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", f);
    //для исходных произвольных данных, значения которых пользователь должен ввести с клавиатуры
    printf("Write\n\n");
    printf("x = ");
    scanf("%lf", &x);
    f = 2 * pow(sin(2 * M_PI - (2 * x)), 2) * pow(cos(5 * M_PI + (2 * x)), 2);
    printf("f = %.4lf", f);
}
