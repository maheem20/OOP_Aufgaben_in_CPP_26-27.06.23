#include "Person.h"
#include <iostream>
#include <ctime>

void Person::geburtsjahr_berechnen()
{
    std::time_t aktuelleZeit = std::time(nullptr); // Aktuelle Zeit abrufen
    std::tm *lokalesZeitobjekt = std::localtime(&aktuelleZeit);
    int aktuellesJahr = lokalesZeitobjekt->tm_year + 1900; // Aktuelles Jahr extrahieren
    int geburtsjahr = aktuellesJahr - alter;
    std::cout << "Geburtsjahr: " << geburtsjahr << std::endl;
}
