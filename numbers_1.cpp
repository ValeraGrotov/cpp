#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
  
    while (true) {

        int command;      // сюда читаем числа
        int lastNumber;   // сюда сохраняем последнее число, которое вводил пользователь
        int counter = 1;  // ну счетчик разумеемся
        int otvet = 1;    // 1 - верно, 0 - неверно

        while (true) {            
            printf("Введите %i число: ", counter);

            scanf_s("%i", &command);

            if (command == 0) { // если 0, выходим
                break;
            }
            
            if (lastNumber > command) { // если последнее число больше того, что юзер ввел сейчас, то числа не возрастают (3 > 2)
                otvet = 0;              // а значит otvet = 0
            }

            lastNumber = command;      // сохраняем значение последнего введенного числа

            counter++;                 // увеличиваем счетчик
        }        

        if (otvet == 1) {
            printf("\n\nВерно");
        } else {
            printf("\n\nНеверно");
        }
    
        printf("\n\nЖелаете повторить?\n\n1. Да\n2. Нет\n");
        scanf_s("%i", &command);
        if (command == 1) {
            continue;
        } else {
            break;
        }
    }

    return 0;
}
