#include "University.h"
#include <iostream>

University::University(const std::string& name, const std::string& country,
                       const std::string& domain, const std::string& website)
    : name(name), country(country), domain(domain), website(website) {}

const std::string& University::getName() const { return name; }
const std::string& University::getCountry() const { return country; }

void University::print() const {
    std::cout << "Назва: " << name << '\n'
              << "Країна: " << country << '\n'
              << "Домен: " << domain << '\n'
              << "Сайт: " << website << "\n\n";
}
