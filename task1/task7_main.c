//Задание 7, 1 файл
#include <stdio.h>
#include <math.h>
#include "func.h"

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