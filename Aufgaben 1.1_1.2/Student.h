#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person
{
public:
    std::string studienfach;

    void studieren();
};

#endif
