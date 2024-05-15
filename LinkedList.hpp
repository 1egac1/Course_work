#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    // Default constructor
    LinkedList();

    // Copy constructor
    LinkedList(const LinkedList& other);

    // Move constructor
    LinkedList(LinkedList&& other) noexcept;

    // Constructor from initializer list
    LinkedList(std::initializer_list<int> init);

    // Destructor
    ~LinkedList();

    // Copy assignment operator
    LinkedList& operator=(const LinkedList& other);

    // Move assignment operator
    LinkedList& operator=(LinkedList&& other) noexcept;

    void addNode(int data);
    Node* getNode(int index);
    Node* findNode(int data);
    void printList();
};

#endif // LINKEDLIST_HPP
