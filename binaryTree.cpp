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

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // Initializing ROOT to NULL
    }
    
    void insert()
    {
        int x;
        cout << "Masukkan nilai: ";
        cin >> x;
        // Step 1: Allocate memory for the new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data field of the new node
        newNode->info = x;

        // Step 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;
    }
};