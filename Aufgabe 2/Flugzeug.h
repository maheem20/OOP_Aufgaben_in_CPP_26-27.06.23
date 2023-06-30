#ifndef FLUGZEUG_H
#define FLUGZEUG_H

#include <string>

class Flugzeug
{
protected:
    std::string hersteller;
    std::string modell;

public:
    Flugzeug(std::string hersteller, std::string modell);
    void starten();
    void landen();
};

#endif
