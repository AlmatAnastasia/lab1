// Задание 6, 1 файл
#include <stdio.h>
#include <math.h>

void function(void);
extern double x, result;
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