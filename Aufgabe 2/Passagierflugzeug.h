#ifndef PASSAGIERFLUGZEUG_H
#define PASSAGIERFLUGZEUG_H

#include "Flugzeug.h"

class Passagierflugzeug : public Flugzeug
{
private:
    int anzahlPassagiere;

public:
    Passagierflugzeug(std::string hersteller, std::string modell, int anzahlPassagiere);
    void passagiere_anzeigen();
};

#endif
