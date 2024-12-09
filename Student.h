#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

class Student : public Person {
private:
    std::string major;

public:
    Student(const std::string &name, int id, const std::string &major);

    std::string getMajor() const;
    std::string getName() const;
    void displayInfo() const override;
};

#endif
