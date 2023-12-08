#pragma once
//servește drept clasă de bază pentru excepții în sistemul de gestionare a farmaciei
#include <stdexcept>

class GestionareFarmacieException : public std::exception {
public:
    const char* what() const noexcept override;
};