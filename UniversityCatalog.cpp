#include "UniversityCatalog.h"

UniversityCatalog::UniversityCatalog() {
    // навчальні приклади закладів і адрес
    universities.emplace_back("Коломийський університет", "Україна", "kolomyia.example", "https://kolomyia.example");
    universities.emplace_back("Львівська академія наук", "Україна", "lviv.example", "https://lviv.example");
    universities.emplace_back("Краківський технологічний інститут", "Польща", "krakow.example", "https://krakow.example");
    universities.emplace_back("Варшавський коледж мистецтв", "Польща", "warsaw.example", "https://warsaw.example");
    universities.emplace_back("Берлінська академія", "Німеччина", "berlin.example", "https://berlin.example");
}

int UniversityCatalog::searchByName(const std::string& query) const {
    int found = 0;
    for (const University& item : universities) {
        if (item.getName().find(query) != std::string::npos) {
            item.print();
            ++found;
        }
    }
    return found;
}

int UniversityCatalog::searchByCountry(const std::string& query) const {
    int found = 0;
    for (const University& item : universities) {
        if (item.getCountry().find(query) != std::string::npos) {
            item.print();
            ++found;
        }
    }
    return found;
}
