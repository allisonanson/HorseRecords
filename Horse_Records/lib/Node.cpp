/*  Node.cpp  */

#include "Node.h" 

//////////////// CONSTRUCTOR/DESTRUCTOR //////////////
Node::Node() {
// Default constructor - sets everything to nullptr. 
    this->left = nullptr;
    this->right = nullptr;
    this->horse = nullptr;
}

Node::Node(Horse* horse) {
// Creates a node with horse argument and sets node's horse info to passed in horse. 
    this->left = nullptr;
    this->right = nullptr;
    this->horse = horse;
}

Node::~Node() {

}

///////////////////// SETTERS ///////////////////////
void Node::setLeftNode(Node* left) {
    this->left = left;
}

void Node::setRightNode(Node* right) {
    this->right = right;
}

void Node::setHorse(Horse* horse){
    this->horse = horse;    
}

/////////////////////// GETTERS ///////////////////////
Node* Node::getLeftNode() {
    return this->left;
}

Node* Node::getRightNode() {
    return this->right;
}

Horse* Node::getHorse() {
    return this->horse;
}

/////////////////////// METHODS ///////////////////////
void Node::displayNode() {
    std::cout << this->getHorse()->getName() << ", " << this->getHorse()->getBirthYear() << std::endl;
}

void Node::addNode(Horse* horse) {
    if (horse->getName() < (this->getHorse()->getName()) ) {
        if (this->getLeftNode()) {
            this->getLeftNode()->addNode(horse);
        }
        else {
            Node* node = new Node(horse);
            this->setLeftNode(node);
        }
    }
    else if (horse->getName() > (this->getHorse()->getName()) ) {
        if (this->getRightNode()) {
            this->getRightNode()->addNode(horse);
        }
        else {
            Node* node = new Node(horse);
            this->setRightNode(node);
        }
    }
}

// edit tree node
// remove tree node
// bool Node::compareHorses(Horse* horse) {}

