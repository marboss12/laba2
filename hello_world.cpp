//программа ввода и вывода имени пользователя
#include <iostream>
    #include <string> 
    int main() {
        std::string name;
        std::cout << "Введите ваше имя: ";
        std::cin >> name; //ввод имени пользователя
        std::cout << "Hello, world from @" << name << std::endl;
      // Используем std::cout и std::endl для избежания конфликтов имен
        return 0;
    }
