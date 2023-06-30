#include "Passagierflugzeug.h"
#include "Frachtflugzeug.h"

int main()
{
    Passagierflugzeug pflugzeug("Airbus", "A320", 150);
    pflugzeug.starten();
    pflugzeug.passagiere_anzeigen();

    Frachtflugzeug fflugzeug("Boeing", "747");
    fflugzeug.landen();
    fflugzeug.fracht_laden();

    return 0;
}
