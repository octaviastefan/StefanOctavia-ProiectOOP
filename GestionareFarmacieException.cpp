#include "GestionareFarmacieException.h"

const char* GestionareFarmacieException::what() const noexcept {
    return "GestionareFarmacieException: An error occurred in the pharmacy management system.";
}