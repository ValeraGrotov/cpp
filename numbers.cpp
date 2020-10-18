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
            
            if (command == 0 ) {
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
        
        if (counter <= 2) {
            printf("\n\nВведите 2 и более числа (чисел)\n\n");
            continue;
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
