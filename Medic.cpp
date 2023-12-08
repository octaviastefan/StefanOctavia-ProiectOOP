#include "Medic.h"
#include <typeinfo>
#include <iostream>

Medic::Medic(const std::string& name, const std::string& spec) : Entitate(name), specializare(spec) {}

Medic& Medic::operator=(const Medic& other) {
    if (this != &other) {
        nume = other.nume;
        specializare = other.specializare;
        pacienti.clear();
        for (const auto& pacient : other.pacienti) {
            pacienti.push_back(std::make_unique<Pacient>(*pacient));
        }
    }
    return *this;
}

void Medic::adaugaPacient(const Pacient& pacient) {
    pacienti.push_back(std::make_unique<Pacient>(pacient));
}

void Medic::afisareDetalii() const {
    std::cout << "Nume Medic: " << nume << ", Specializare: " << specializare << std::endl;
    std::cout << "Pacienti:\n";
    for (const auto& pacientPtr : pacienti) {
        if (auto pacient = dynamic_cast<const Pacient*>(pacientPtr.get())) {
            pacient->afisareDetalii();
        } else {
            std::cerr << "Error: Failed dynamic_cast for Pacient." << std::endl;
        }
    }
}

int Medic::getTotalEntities() {
    return entitiesInitialized ? 1 : 0;
}
