#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <clocale>
int main() {
    setlocale(LC_ALL, "Ukrainian");
    int x, y, z;
    double b, denominator;

    while (1) {
        printf("Введiть цiлi значення x, y, z: ");
        scanf("%d %d %d", &x, &y, &z);

        // Обчислюємо знаменник
        denominator = pow(x, 4) / 2.0 - pow(sin(z), 2);

        if (denominator == 0) {
            printf("Помилка: знаменник дорiвнює нулю. Задайте iншi значення.\n");
        }
        else {
            break;
        }
    }

    // Обчислення значення функції
    b = (1 + cos(y - 2)) / denominator;

    printf("Значення функцiї b = %.4lf\n", b);

    return 0;
}
