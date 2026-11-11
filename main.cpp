#define NOMINMAX
#include <Windows.h>
#include "UniversityCatalog.h"
#include <iostream>
#include <limits>
#include <string>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    UniversityCatalog catalog;
    while (true) {
        std::cout << "\n1 - пошук за назвою\n2 - пошук за країною\n0 - вихід\nВаш вибір: ";
        int choice;
        if (!(std::cin >> choice)) {
            if (std::cin.eof()) break;
            std::cout << "Помилка: введіть число.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (choice == 0) break;
        if (choice != 1 && choice != 2) {
            std::cout << "Такого пункту немає.\n";
            continue;
        }

        std::cout << (choice == 1 ? "Введіть назву або її частину: " : "Введіть країну: ");
        std::string query;
        if (!std::getline(std::cin, query)) break;
        if (query.empty() || query.find_first_not_of(" \t") == std::string::npos) {
            std::cout << "Запит не може бути порожнім.\n";
            continue;
        }

        // шукаємо збіги у вибраному полі
        int count = choice == 1 ? catalog.searchByName(query) : catalog.searchByCountry(query);
        if (count == 0) std::cout << "Університетів не знайдено.\n";
        else std::cout << "Знайдено: " << count << '\n';
    }
    return 0;
}
