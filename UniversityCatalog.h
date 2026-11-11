#pragma once
#include "University.h"
#include <string>
#include <vector>

class UniversityCatalog {
    std::vector<University> universities;

public:
    UniversityCatalog();
    int searchByName(const std::string& query) const;
    int searchByCountry(const std::string& query) const;
};
