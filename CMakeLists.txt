cmake_minimum_required(VERSION 3.26)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled2 main.cpp
        Entitate.cpp
        Entitate.h
        EntitateException.cpp
        EntitateException.h
        Furnizor.cpp
        Furnizor.h
        GestionareFarmacieException.cpp
        GestionareFarmacieException.h
        Medic.cpp
        Medic.h
        Medicament.cpp
        Medicament.h
        Pacient.cpp
        Pacient.h)
