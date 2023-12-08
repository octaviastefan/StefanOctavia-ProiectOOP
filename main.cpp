#include "Medicament.h"
#include "Furnizor.h"
#include "Pacient.h"
#include "Medic.h"
#include <iostream>

int main() {
    try {
        Medicament medicament("Paracetamol", 100);
        Furnizor furnizor("Firma A", "Str. Principala, nr. 123");
        Pacient pacient("Popescu Ion", 45, "Nurofen");
        Medic medic("Dr. Mihai", "Medic de familie");
        medic.adaugaPacient(pacient);

        std::cout << "Total Medicament entities: " << Medicament::getTotalEntities() << std::endl;
        std::cout << "Total Furnizor entities: " << Furnizor::getTotalEntities() << std::endl;
        std::cout << "Total Pacient entities: " << Pacient::getTotalEntities() << std::endl;
        std::cout << "Total Medic entities: " << Medic::getTotalEntities() << std::endl;

        medicament.afisareDetalii();
        std::cout << std::endl;
        furnizor.afisareDetalii();
        std::cout << std::endl;
        pacient.afisareDetalii();
        std::cout << std::endl;
        medic.afisareDetalii();
        std::cout << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
