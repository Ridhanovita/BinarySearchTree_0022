#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the class node
    Node()
    {
        leftchild = nullptr;  // Initializing left chils to null
        rightchild = nullptr; // Initializing right child to null
    }
};
