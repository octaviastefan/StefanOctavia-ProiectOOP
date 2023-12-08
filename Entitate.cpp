#include "Entitate.h"

bool Entitate::entitiesInitialized = false;

Entitate::Entitate(const std::string& name) : nume(name) {
    initializeEntities();
}

Entitate::~Entitate() {
}

void Entitate::initializeEntities() {
    if (!entitiesInitialized) {
        entitiesInitialized = true;
    }
}
