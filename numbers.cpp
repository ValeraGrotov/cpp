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
        counter++;

        scanf_s("%i", &command);

        if (command == 0) {
            break;
        } else {
            numbers.push_back(command);
        }
    }

    int tempNumber;

    for (int i = 0; i < numbers.size() - 1; i++) {

        for (int j = i + 1; j < numbers.size(); j++) {
            if (numbers[i] > numbers[j]) {
                otvet = 0;
                tempNumber = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tempNumber;
            }
        }

    }

    if (otvet == 0) {
        printf("\nНеверно.\n\nПравильная последовательность: [");
        for (int i = 0; i < numbers.size(); i++) {
            printf("%i", numbers[i]);
            if (i + 1 == numbers.size()) {
                printf("] \n");
            } else {
                printf(", ");
            }
        }
    } else {
        printf("\nВсе верно.\n");
    }
    
    printf("\n");
    return 0;
}
