#include <vector>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
   
    int command;

    int counter = 1;

    vector<int> numbers;

    int otvet = 1;

    while (true) {
        printf("Введите %i число: ", counter);

        scanf_s("%i", &command);

        if (command == 0) {
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

    return 0;
}
