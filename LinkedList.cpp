#include "headers.hpp"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(const LinkedList& other) {
    head = nullptr;
    for (Node* current = other.head; current != nullptr; current = current->next) {
        addNode(current->data);
    }
}

LinkedList::LinkedList(LinkedList&& other) noexcept {
    head = other.head;
    other.head = nullptr;
}

LinkedList::LinkedList(std::initializer_list<int> init) {
    head = nullptr;
    for (int value : init) {
        addNode(value);
    }
}

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

LinkedList& LinkedList::operator=(const LinkedList& other) {
    if (this != &other) {
        LinkedList temp(other);
        std::swap(head, temp.head);
    }
    return *this;
}

LinkedList& LinkedList::operator=(LinkedList&& other) noexcept {
    if (this != &other) {
        std::swap(head, other.head);
    }
    return *this;
}

void LinkedList::addNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

Node* LinkedList::getNode(int index) {
    Node* current = head;
    for (int i = 0; i < index && current != nullptr; i++) {
        current = current->next;
    }
    return current;
}

Node* LinkedList::findNode(int data) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == data) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

void LinkedList::printList() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
