/*  BinaryTree.h */

#pragma once

#include "Node.h"

class BinaryTree {
    private:
        Node* root;
        int numberOfNodes;

    public: 
        // constructor and destructor 
        BinaryTree();
        ~BinaryTree();

        // setters 
        void setRoot(Node* node);
        
        // getters 
        Node* getRoot();
        int getNumberOfNodes();

        // methods
        void addNode(Horse* horse);
        void displayTree();
        void displayTree(Node* node);
        Node* searchTree(Horse* horse);
        Node* searchTree(Node* node, Horse* horse);
};

