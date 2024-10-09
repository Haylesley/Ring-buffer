#include <iostream>
#include <vector>

int main() {
    const int maxSize = 20;
    std::vector<int> db(maxSize);
    int input;
    int count = 0;

    while (true) {
        std::cout << "input number: ";
        std::cin >> input;

        if (input == -1) {
            // Если введено -1, выводим содержимое хранилища
            std::cout << "output: ";
            for (int i = 0; i < count && i < maxSize; ++i) {
                std::cout << db[i] << " ";
            }
            std::cout << std::endl;
        } else if (input == -2) {
            // Если введено -2, завершаем выполнение программы
            std::cout << "Exiting the program." << std::endl;
            break;
        } else {
            db[count % maxSize] = input; // Записываем значение в текущую позицию
            count++;
        }
    }

    return 0;
}
