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
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i; j < numbers.size(); j++) {
            if (numbers[i] > numbers[j]) {
                otvet = 0;
            }
        }
    }
    
    if (otvet == 1) {
        printf("\nОтвет: Все верно, числа возрастают\n");
    } else {
        printf("\nОтвет: Неверно, числа не возрастают\n");        
    }

    return 0;
}
