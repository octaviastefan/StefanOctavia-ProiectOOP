#include <iostream>
#include <string>
#include <vector>

class Medicament {
private:
    std::string nume;
    int stoc;
public:
    explicit Medicament(const std::string& name, int stok = 0)  {
        this->nume=name;
        this->stoc=stok;

    }
    Medicament(const Medicament& other)=default;
    Medicament& operator=(const Medicament& other) {
        if (this != &other) {
            nume = other.nume;
            stoc = other.stoc;
        }
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& out, const Medicament& medicament) {
        out << "Nume Medicament: " << medicament.nume;
        if (medicament.stoc > 0) {
            out << ", Stoc: " << medicament.stoc;
        } else {
            out << ", Stoc epuizat";
        }
        return out;
    }

    //void adaugaStoc(int cantitate) {
    //    stoc += cantitate;
    //}

    // bool esteEpuizat() const {
    //     return stoc == 0;
    // }

    // std::string getNume() const {
    //    return nume;
    // }
};

class Furnizor {
private:
    std::string nume;
    std::string adresa;

public:
    Furnizor(const std::string& name, const std::string& adress) {
        this->nume=name;
        this-> adresa=adress;
    }

    Furnizor(const Furnizor& other)=default;

    Furnizor& operator=(const Furnizor& other) {
        if (this != &other) {
            nume = other.nume;
            adresa = other.adresa;
        }
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& out, const Furnizor& furnizor) {
        out << "Nume Furnizor: " << furnizor.nume << ", Adresa: " << furnizor.adresa;
        return out;
    }

    // std::string getNume() const {
    //    return nume;
    // }

};

class Pacient {
private:
    std::string nume;
    int varsta;
    std::string medicamentRecomandat;

public:
    Pacient(const std::string& name, int vrst, const std::string& medicamentrec){
        this->nume=name;
        this->varsta=vrst;
        this->medicamentRecomandat=medicamentrec;
    }

    Pacient(const Pacient& other)=default;


    Pacient& operator=(const Pacient& other) {
        if (this != &other) {
            nume = other.nume;
            varsta = other.varsta;
            medicamentRecomandat = other.medicamentRecomandat;
        }
        return *this;
    }

    friend std::ostream& operator<<(std::ostream& out, const Pacient& pacient) {
        out << "Nume Pacient: " << pacient.nume << ", Varsta: " << pacient.varsta;
        out << ", Medicament Recomandat: " << pacient.medicamentRecomandat;
        return out;
    }

    //std::string getNume() const {
    //    return nume;
    //}

};

class Medic {
private:
    std::string nume;
    std::string specializare;
    std::vector<Pacient> pacienti;
public:
    Medic(const std::string& name, const std::string& spec){
        this->nume=name;
        this->specializare=spec;
    }

    Medic(const Medic& other)=default;


    Medic& operator=(const Medic& other) {
        if (this != &other) {
            nume = other.nume;
            specializare = other.specializare;
            pacienti = other.pacienti;
        }
        return *this;
    }

    ~Medic(){std::cout<<"ok";}

    void adaugaPacient(const Pacient& pacient) {
        pacienti.push_back(pacient);
    }

    friend std::ostream& operator<<(std::ostream& out, const Medic& medic) {
        out << "Nume Medic: " << medic.nume << ", Specializare: " << medic.specializare << std::endl;
        out << "Pacienti:\n";
        for (const Pacient& pacient : medic.pacienti) {
            out << pacient << std::endl;
        }
        return out;
    }
};

int main() {
    Medicament medicament1("Paracetamol", 100);
    Medicament medicament2("Ibuprofen");
    Medicament medicament3("Aspirina", 50);

    Furnizor furnizor1("Firma A", "Str. Principala, nr. 123");
    Furnizor furnizor2("Firma B", "Str. Secundara, nr. 456");

    Pacient pacient1("Popescu Ion", 45, "Nurofen");
    Pacient pacient2("Ionescu Ioana", 30, "Paracetamol");

    Medic medic("Dr. Mihai", "Medic de familie");
    medic.adaugaPacient(pacient1);
    medic.adaugaPacient(pacient2);

    std::cout << "Medicamente:\n";
    std::cout << medicament1 << std::endl;
    std::cout << medicament2 << std::endl;
    std::cout << medicament3 << std::endl;

    std::cout << "\nFurnizori:\n";
    std::cout << furnizor1 << std::endl;
    std::cout << furnizor2 << std::endl;

    std::cout << "\nMedic:\n";
    std::cout << medic << std::endl;

    return 0;
}