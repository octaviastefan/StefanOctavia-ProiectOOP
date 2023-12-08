#include "Furnizor.h"
#include <iostream>

Furnizor::Furnizor(const std::string& name, const std::string& address)
        : Entitate(name), adresa(address) {}

Furnizor& Furnizor::operator=(const Furnizor& other) {
    if (this != &other) {
        nume = other.nume;
        adresa = other.adresa;
    }
    return *this;
}

void Furnizor::afisareDetalii() const {
    std::cout << "Nume Furnizor: " << nume << ", Adresa: " << adresa;
}

int Furnizor::getTotalEntities() {
    return entitiesInitialized ? 1 : 0;
}
