#pragma once

#include "Entitate.h"

class Furnizor : public Entitate {
private:
    std::string adresa;

public:
    Furnizor(const std::string& name, const std::string& address);
    Furnizor(const Furnizor& other) = default;
    Furnizor& operator=(const Furnizor& other);

    void afisareDetalii() const override;

    static int getTotalEntities();
};
