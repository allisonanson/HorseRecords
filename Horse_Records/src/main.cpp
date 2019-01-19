#include "Horse.h"

int main()
{
    /////////////// MENU ///////////////
    std::string choice = "";

    do {
        std::cout << "\n\n***** MENU ***** \n\n"
                  << " \"add\" - Add a New Horse \n"
                  << " \"change\" - Change a Current Horse \n"
                  << " \"remove\" - Remove a Current Horse \n"
                  << " \"search\" - Search Current Horses \n"
                  << " \"quit\" - Quit Program \n\n\n"
                  << "Please enter a menu option:\t";
        std::cin >> choice;
        
        if (choice == "add" || choice == "ADD") {
            // FUNCTION TO ADD HORSE OBJECT
        }
        else if (choice == "change" || choice =="CHANGE") {
            // FUNCTION TO CHANGE HORSE OBJECT
        }
        else if (choice == "remove" || choice == "REMOVE") {
            // FUNCTION TO REMOVE HORSE OBJECT
        }
        else if (choice == "search" || choice == "SEARCH") {
            // FUNCTION TO SEARCH HORSE OBJECTS
        }
        else if (choice == "quit" || choice == "QUIT") {
            std::cout << "\n\n ***** TERMINATING PROGRAM ***** \n\n\n";
            return 1;
        }
        else {
            continue;
        }

    }
    while (choice != "quit");
    
    /////////////////////////////////////////

    /*

    // file declaration and opening
    std::ofstream fout;
    fout.open ("info.csv", std::ios::app);

    // quits program if file doesn't exist
    if (!fout) {
        std::cout<< "\n\n* * * * * Program Terminated * * * * *"
                 << "\nFile failed to open.\n\n";

        return 1;
    }

    Horse horse1;
    
    horse1.setName(horse1.inputName());
    fout << "\n------------ \nName: " << horse1.getName() << std::endl;
    
    std::cout << "Horse " << horse1.getName() << " was written to the file. \n\n";

    fout.close();    // close output file

    */

    return 0;
}
