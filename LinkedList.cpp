#include "LinkedList.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    while (head) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::add(const Student &student) {
    Node *newNode = new Node(student);
    newNode->next = head;
    head = newNode;
    std::cout << "Student added: " << student.getName() << '\n';
}

void LinkedList::displayAll() const {
    if (!head) {
        std::cout << "No students in the list.\n";
        return;
    }
    Node *current = head;
    while (current) {
        current->data.displayInfo();
        current = current->next;
    }
}

void LinkedList::searchByMajor(const std::string &major) const {
    if (!head) {
        std::cout << "List is empty. Cannot search.\n";
        return;
    }
    Node *current = head;
    bool found = false;
    while (current) {
        if (current->data.getMajor() == major) {
            current->data.displayInfo();
            found = true;
        }
        current = current->next;
    }
    if (!found) {
        std::cout << "No students found with major: " << major << '\n';
    }
}

bool LinkedList::compareStudentsByName(const Student &a, const Student &b) {
    return a.getName() < b.getName();
}

void LinkedList::sortByName() {
    if (!head || !head->next) {
        std::cout << "List too small to sort.\n";
        return;
    }

    std::vector<Student> studentList;
    Node *current = head;
    while (current) {
        studentList.push_back(current->data);
        current = current->next;
    }

    std::sort(studentList.begin(), studentList.end(), compareStudentsByName);

    current = head;
    for (size_t i = 0; i < studentList.size(); ++i) {
        current->data = studentList[i];
        current = current->next;
    }

    std::cout << "List sorted by name.\n";
}
