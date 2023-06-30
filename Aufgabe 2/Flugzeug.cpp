#include "Flugzeug.h"
#include <iostream>

Flugzeug::Flugzeug(std::string hersteller, std::string modell)
    : hersteller(hersteller), modell(modell) {}

void Flugzeug::starten()
{
    std::cout << "Das Flugzeug wurde gestartet." << std::endl;
}

void Flugzeug::landen()
{
    std::cout << "Das Flugzeug wurde gelandet." << std::endl;
}
