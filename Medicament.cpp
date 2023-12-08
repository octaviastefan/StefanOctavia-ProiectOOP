#include "Medicament.h"
#include <iostream>

Medicament::Medicament(const std::string& name, int quantity) : Entitate(name), cantitate(quantity) {}

void Medicament::afisareDetalii() const {
    std::cout << "Nume Medicament: " << nume << ", Cantitate: " << cantitate << std::endl;
}

Entitate* Medicament::clone() const {
    return new Medicament(*this); // utilizeaza constructorul de copiere pt clonare
}

int Medicament::getTotalEntities() {
    return entitiesInitialized ? 1 : 0;
}