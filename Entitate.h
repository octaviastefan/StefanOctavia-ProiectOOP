#pragma once
//Clasa de bază pentru toate entitățile (Medicament, Furnizor, Pacient, Medic)
#include <string>

class Entitate {
protected:
    static bool entitiesInitialized;
    std::string nume;

public:
    explicit Entitate(const std::string& name);
    virtual ~Entitate();

    static void initializeEntities();

    virtual void afisareDetalii() const = 0;
};
