#ifndef FRACHTFLUGZEUG_H
#define FRACHTFLUGZEUG_H

#include "Flugzeug.h"

class Frachtflugzeug : public Flugzeug
{
public:
    Frachtflugzeug(std::string hersteller, std::string modell);
    void fracht_laden();
};

#endif
