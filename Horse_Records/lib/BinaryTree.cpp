/*  BinaryTree.cpp  */

#include "BinaryTree.h"

////////////////// CONSTRUCTOR/DESTRUCTOR //////////////////
BinaryTree::BinaryTree() {
    root = nullptr;
    numberOfNodes = 0;
}

BinaryTree::~BinaryTree() {}

//////////////////////// SETTERS //////////////////////////
void BinaryTree::setRoot(Node* node) {
    this->root = node;
}

/////////////////////// GETTERS ///////////////////////////
Node* BinaryTree::getRoot() { 
    return this->root;    
}

int BinaryTree::getNumberOfNodes() {
    return this->numberOfNodes;
}

/////////////////////// METHODS ///////////////////////////
void BinaryTree::addNode(Horse* horse) {
    
    // if there are already nodes in the list
    if(root != nullptr) {
        this->root->addNode(horse);
    }
    // otherwise no nodes present; make new node root
    else {
        Node* node = new Node(horse);
        this->root = node;
    }
}

void BinaryTree::displayTree() {
    displayTree(this->root);
} 

void BinaryTree::displayTree(Node* node) {
    if (node->getLeftNode()) {
        displayTree(node->getLeftNode());
    }
    node->displayNode();

    if (node->getRightNode()) {
        displayTree(node->getRightNode());
    }
}

Node* BinaryTree::searchTree(Horse* horse) {
    searchTree(this->root, horse);
}

Node* BinaryTree::searchTree(Node* node, Horse* horse) {

    std::string searchedHorseName = horse->toLower(horse->getName());
    std::string nodeHorseName = node->getHorse()->toLower(node->getHorse()->getName());

    // if node exists (not nullptr) and names match, horse was found so return node
    if (searchedHorseName == nodeHorseName && node) {
        std::cout << "Horse \"" << horse->getName() << "\" is in your records! \n";
        return node;
    }
    // if horse name is less than node above and if a left node exists, check left node
    else if (searchedHorseName < nodeHorseName && node->getLeftNode()) {
        searchTree(node->getLeftNode(), horse);
    }
    // if horse name is greater than node in if statement and a right exists, check right
    else if (searchedHorseName > nodeHorseName && node->getRightNode()) {
        searchTree(node->getRightNode(), horse);
    }
    // else if reached, no names matched in binary tree so horse was not found
    else {
        std::cout << "No horse \"" << horse->getName() << "\" was found in your records. \n";
        return nullptr;
    }
}

