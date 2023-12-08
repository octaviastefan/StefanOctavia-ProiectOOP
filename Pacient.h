#pragma once
#include "Entitate.h"

class Pacient : public Entitate {
private:
    int varsta;
    std::string medicamentRecomandat;

public:
    Pacient(const std::string& name, int vrst, const std::string& medicamentrec);
    Pacient(const Pacient& other) = default;
    Pacient& operator=(const Pacient& other);

    void afisareDetalii() const override;

    static int getTotalEntities();
};
