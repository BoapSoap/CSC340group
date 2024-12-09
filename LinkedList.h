#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <string>

class LinkedList {
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();

    void add(const Student &student);
    void displayAll() const;
    void searchByMajor(const std::string &major) const;
    void sortByName();

    static bool compareStudentsByName(const Student &a, const Student &b);
};

#endif
