#include "Person.h"
#include "Student.h"

int main()
{
    // Aufgabe 1.1
    Person person;
    person.name = "Max Mustermann";
    person.alter = 25;
    person.geburtsjahr_berechnen();

    // Aufgabe 1.2
    Student student;
    student.name = "Erika Musterfrau";
    student.alter = 20;
    student.studienfach = "Informatik";
    student.geburtsjahr_berechnen();
    student.studieren();

    return 0;
}
