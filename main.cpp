#include "LinkedList.h"
#include <iostream>
#include <fstream>
#include <string>

int main() {
    LinkedList studentList;

    // Read students from "students.txt"
    // Format: Name ID Major
    // Example:
    // Alice 1 ComputerScience
    // Bob 2 Mathematics
    // Charlie 3 Physics
    // Diana 4 ComputerScience

    std::ifstream infile("students.txt");
    if (!infile) {
        std::cerr << "Unable to open file students.txt\n";
        return 1;
    }

    std::string name, major;
    int id;
    while (infile >> name >> id >> major) {
        Student s(name, id, major);
        studentList.add(s);
    }
    infile.close();

    std::cout << "\nAll Students:\n";
    studentList.displayAll();

    std::cout << "\nStudents with Major: ComputerScience\n";
    studentList.searchByMajor("ComputerScience");

    std::cout << "\nSearching for Non-existent Major:\n";
    studentList.searchByMajor("Biology");

    std::cout << "\nStudents sorted by Name:\n";
    studentList.sortByName();
    studentList.displayAll();

    return 0;
}
