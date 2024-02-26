#include <stdio.h>
#include <math.h>

int main() {
    double number = 16.0;
    double result = sqrt(number);
    printf("Корень числа %.2f равен %.2f\n", number, result);
    result *= 2;
    printf("Значение результат, умноженное на 2: %.2f", result);
    return 0;
}