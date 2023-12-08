#pragma once
//servește drept clasă de excepție pentru erori specifice entităților din sistemul de gestionare a farmaciei
#include "GestionareFarmacieException.h"

class EntitateException : public GestionareFarmacieException {
public:
    const char* what() const noexcept override;
};