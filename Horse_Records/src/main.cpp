/*  main.cpp  */

#include "Horse.h"
#include "BinaryTree.h"

void printMainMenu(); 


int main()
{

    BinaryTree binaryTree;
    
    Horse* horse1 = new Horse();
    horse1->setName("Billy");

    Horse* horse2 = new Horse();
    horse2->setName("Tom");

    Horse* horse3 = new Horse();
    horse3->setName("Write");

    binaryTree.addNode(horse2);
    binaryTree.addNode(horse3);
    binaryTree.addNode(horse1);

    binaryTree.displayTree();

    binaryTree.searchTree(horse2);

    /////////////// MENU ///////////////
    int choice = 0;

    do {
        printMainMenu();
        std::cin >> choice;
        
        if (choice == 1) {
            // FUNCTION TO ADD HORSE OBJECT
        }
        else if (choice == 2) {
            // FUNCTION TO CHANGE HORSE OBJECT
        }
        else if (choice == 3) {
            // FUNCTION TO REMOVE HORSE OBJECT
        }
        else if (choice == 4) {
            // FUNCTION TO SEARCH HORSE OBJECTS
        }
        else if (choice == 5) {
            std::cout << "\n\n ***** TERMINATING PROGRAM ***** \n\n\n";
        }
        else {
            std::cin.clear();
            std::cin.ignore();
            choice = 0;
        }

    }
    while (choice != 5);

    return 0;
}


void printMainMenu() {
    std::cout << "• • • • • • • • • • • •\n"
              << "•         MENU        •\n"
              << "• • • • • • • • • • • •\n"
              << "•  1. Add Horse       •\n"
              << "•  2. Change Horse    •\n"
              << "•  3. Remove Horse    •\n"
              << "•  4. Search Horses   •\n"
              << "•  5. Quit            •\n"
              << "• • • • • • • • • • • •\n"
              << "Choose an option...  ";
}
