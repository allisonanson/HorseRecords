/*  Node.h  */

#pragma once

#include <iostream>
#include <string>
#include "Horse.h"

class Node {
    private:
        Horse* horse;
        Node* left;
        Node* right;

    public:
        // constructors and destructor
        Node();
        Node(Horse* horse);
        ~Node();

         // setters
        void setLeftNode(Node* left);
        void setRightNode(Node* right);
        void setHorse(Horse* horse);

        // getters
        Node* getLeftNode();
        Node* getRightNode();
        Horse* getHorse();

        // methods 
        void displayNode();       // display single tree node
        void addNode(Horse* horse);
        // edit tree node
        // remove tree node
        //bool compareHorses(Horse* horse);
};


