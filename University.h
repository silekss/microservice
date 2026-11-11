#pragma once
#include <string>

class University {
    std::string name;
    std::string country;
    std::string domain;
    std::string website;

public:
    University(const std::string& name, const std::string& country,
               const std::string& domain, const std::string& website);
    const std::string& getName() const;
    const std::string& getCountry() const;
    void print() const;
};
