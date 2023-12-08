#pragma once

#include "Entitate.h"
#include <memory>
#include <vector>
#include "Pacient.h"

class Medic : public Entitate {
private:
    std::string specializare;
    //smartpointer(vectorul de pacienti)
    std::vector<std::unique_ptr<Pacient>> pacienti;

public:
    Medic(const std::string& name, const std::string& spec);
    Medic(const Medic& other) = default;
    Medic& operator=(const Medic& other);

    void adaugaPacient(const Pacient& pacient);
    void afisareDetalii() const override;

    static int getTotalEntities();
};
