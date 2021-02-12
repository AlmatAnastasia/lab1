// Задание 5, 1 файл
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
