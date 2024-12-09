#include "Student.h"
#include <iostream>

Student::Student(const std::string &name, int id, const std::string &major)
    : Person(name, id), major(major) {}

std::string Student::getMajor() const {
    return major;
}

std::string Student::getName() const {
    return name;
}

void Student::displayInfo() const {
    std::cout << "Name: " << name << ", ID: " << id << ", Major: " << major << '\n';
}
