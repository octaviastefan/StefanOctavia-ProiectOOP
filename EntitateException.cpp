#include "EntitateException.h"

const char* EntitateException::what() const noexcept {
    return "EntitateException: An error occurred related to entities in the pharmacy management system.";
}