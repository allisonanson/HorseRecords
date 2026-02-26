#include "Interface.h"

Interface::Interface()  // constructor
{
    this->user = "Allison Anson";
}

void Interface::title() {
    std::cout << " HORSE RECORDS FILE " << std::endl
              << "--------------------\n\n";
}
