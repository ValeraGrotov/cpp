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

    for (int index = 0; index < numbers.size() - 1; index++) {

        for (int nextIndex = index + 1; nextIndex < numbers.size(); nextIndex++) {
            if (numbers[index] > numbers[nextIndex]) {
                otvet = 0;
                tempNumber = numbers[index];
                numbers[index] = numbers[nextIndex];
                numbers[nextIndex] = tempNumber;
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
