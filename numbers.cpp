#include <vector>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
  
    while (true) {

        int command;
        int counter = 1;
        vector<int> numbers;
        int otvet = 1;

        while (true) {
            printf("Введите %i число: ", counter);

            scanf_s("%i", &command);

            if (command == 0) {
                if (counter == 1) {
                    printf("Введите больше, чем 1 число");
                    return 0;
                }
                break;
            } else {
                numbers.push_back(command);

                for (int i = 0; i < counter; i++) {
                    if (numbers[i] > command) {
                        otvet = 0;
                    }
                }

                counter++; // счетчик увеличиваем здесь
            }
        }
    
        if (otvet == 1) {
            printf("Верно");        
        } else {
            printf("Неверно");        
        }
    
        printf("\n\nЖелаете повторить?\n\n1. Да\n2. Нет");
        scanf_s("%i", &command);
        if (command == 1) {
            continue;
        } else {
            break;
        }
    }

    return 0;
}
