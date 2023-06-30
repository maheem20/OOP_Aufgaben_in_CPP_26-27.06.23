#include "Frachtflugzeug.h"
#include <iostream>

Frachtflugzeug::Frachtflugzeug(std::string hersteller, std::string modell)
    : Flugzeug(hersteller, modell) {}

void Frachtflugzeug::fracht_laden()
{
    std::cout << "Die Fracht wird geladen." << std::endl;
}
