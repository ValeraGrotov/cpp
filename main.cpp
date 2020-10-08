#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    setlocale(LC_ALL, "rus");

    int command;
    float x, y, r, phi_rad, phi_grad;  

    printf("\n");
    printf("// Программа для перевода декартовых координат в полярные и наоборот   \n");
    printf("// Разработчик: Ковалев Павел   \n");
    printf("\n\n");
    
    printf("1. Перевести декартовы координаты в полярные\n");
    printf("2. Перевести полярные координаты в декартовы\n");
    printf("3. Выйти из программы\n\n");

    printf("Введите нужный пунт меню: ");

    while (true) {
        scanf_s("%i", &command);

        if ((command == 1) || (command == 2) || (command == 3)) {
            break; // Все хорошо, пользователь ввел 1, 2 или 3
        } else {
            printf("Введите нужный пунт меню (1, 2 или  3): "); // Пользователь ввел другу цифру
            continue;
        }
    }

    if (command == 1) {
        printf("\n// 1. Перевод декартовых координат в полярные\n\n");

        while (true) {
            printf("Введите координату X: ");
            scanf_s("%f", &x);

            printf("Введите координату Y: ");
            scanf_s("%f", &y);

            if ((x == 0) && (y == 0)) {
                
                printf("\n// Программа завершена с ошибкой: X и Y не могут быть равны 0 одновременно. \n\n");

                return 0;

            } else {
                break;
            }
        }

        r = sqrt(x * x + y * y);
        phi_rad = acos (x / r);
        phi_grad = phi_rad * (180 / M_PI);

        printf("\nПолярный радиус равен: %f", r);
        printf("\nПолярный угол равен (в радианах): %f", phi_rad);
        printf("\nПолярный угол равен (в градусах): %f", phi_grad);
        
        printf("\n\n// Программа успешно завершена.\n\n");
    }

    else if (command == 2) {
        
        printf("\n// 2.. Перевод полярных координат в декартовы\n\n");

        printf("Введите полярный радиус: ");
        scanf_s("%f", &r);

        printf("Введите величину полярного угла (в градусах): ");
        scanf_s("%f", &phi_grad);

        phi_rad = (phi_grad * M_PI) / 180;
        x = r * cos(phi_rad);
        y = r * sin(phi_rad);

        printf("\nX: %f \nY: %f \n", x, y);
        printf("\n// Программа успешно завершена.\n\n");

    } else if (command == 3) {
        printf("\n// Программа успешно завершена.\n\n");        
    }

    return 0;
}
