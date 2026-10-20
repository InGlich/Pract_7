#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    Task();
    Task2();
    TaskDZ();
}
int Task() {
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c) {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;
    default:
        printf("Это буква\n");
        break;
    }

    return 0;
}
int Task2() {
    float x, y, result;
    char op;

    printf("Введите выражение (например, 2.5+3.7): ");
    scanf("%f%c%f", &x, &op, &y);

    switch (op) {
    case '+':
        printf("= %.2f\n", x + y);
        break;
    case '-':
        printf("= %.2f\n", x - y);
        break;
    case '*':
        printf("= %.2f\n", x * y);
        break;
    case '/':
        if (y != 0) {
            printf("= %.2f\n", x / y);
        }
        else {
            printf("Ошибка: деление на ноль!\n");
        }
        break;
    case '^':
        printf("= %.2f\n", pow(x, y));
        break;
    default:
        printf("Неизвестная операция: %c\n", op);
        break;
    }

    return 0;
}
int TaskDZ() {
    int n;

    printf("Введите сумму (1-999): ");
    scanf("%d", &n);

    if (n < 1 || n > 999) {
        printf("Число должно быть в диапазоне от 1 до 999\n");
        return 1;
    }

    int last_digit = n % 10;
    int last_two_digits = n % 100;

    printf("%d ", n);
    switch (last_two_digits) {
    case 11:
    case 12:
    case 13:
    case 14:
        printf("рублей\n");
        break;
    default:
        switch (last_digit) {
        case 1:
            printf("рубль\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("рубля\n");
            break;
        default:
            printf("рублей\n");
            break;
        }
        break;
    }

    return 0;
}