#ifndef NODE_H
#define NODE_H

#include "Student.h"

// Node now exists as a standalone struct
struct Node {
    Student data;
    Node *next;

    Node(const Student &data);
};

#endif
