#pragma once

#include "Entitate.h"

class Medicament : public Entitate {
private:
    int cantitate;

public:
    Medicament(const std::string& name, int quantity = 0);

    void afisareDetalii() const override;
    virtual Entitate* clone() const ;

    static int getTotalEntities();
};
