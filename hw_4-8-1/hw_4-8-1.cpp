
#include <iostream>
#include <Windows.h>

int compare(int forbidden_length, std::string input) {
    int input_length = input.length();
    if (input_length != forbidden_length)
        return input_length;
    else
        throw "Вы ввели слово запретной длины. До свидания.";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int forbidden_length = 0;
    std::string input;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    bool flag = true;
    while (flag == true) {
        try {
            std::cout << "Введите слово: ";
            std::cin >> input;
            int answer = compare(forbidden_length, input);
            std::cout << "Длина слова " << input << " равна " << answer << std::endl;
        }
        catch (const char* msg) {
            std::cout << msg;
            flag = false;
        }
    }
}
