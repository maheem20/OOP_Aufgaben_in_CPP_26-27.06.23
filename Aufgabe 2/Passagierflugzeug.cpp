#include "Passagierflugzeug.h"
#include <iostream>

Passagierflugzeug::Passagierflugzeug(std::string hersteller, std::string modell, int anzahlPassagiere)
    : Flugzeug(hersteller, modell), anzahlPassagiere(anzahlPassagiere) {}

void Passagierflugzeug::passagiere_anzeigen()
{
    std::cout << "Anzahl der Passagiere im Flugzeug: " << anzahlPassagiere << std::endl;
}
