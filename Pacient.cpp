#include "Pacient.h"
#include <iostream>

Pacient::Pacient(const std::string& name, int vrst, const std::string& medicamentrec)
        : Entitate(name), varsta(vrst), medicamentRecomandat(medicamentrec) {}

Pacient& Pacient::operator=(const Pacient& other) {
    if (this != &other) {
        nume = other.nume;
        varsta = other.varsta;
        medicamentRecomandat = other.medicamentRecomandat;
    }
    return *this;
}

void Pacient::afisareDetalii() const {
    std::cout << "Nume Pacient: " << nume << ", Varsta: " << varsta;
    std::cout << ", Medicament Recomandat: " << medicamentRecomandat;
}

int Pacient::getTotalEntities() {
    return entitiesInitialized ? 1 : 0;
}
