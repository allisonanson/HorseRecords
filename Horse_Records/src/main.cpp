#include "Horse.h"

int main()
{
    // file declaration and opening
    std::ofstream fout;
    fout.open ("info.csv");

    // quits program if file doesn't exist
    if (!fout) {
        std::cout<< "\n\n* * * * * Program Terminated * * * * *"
                 << "\nInput file failed to open.\n\n";

        return 1;
    }

    Horse horse1;
    
    horse1.setName(horse1.inputName());
    fout << "\n------------ \nName: " << horse1.getName() << std::endl;
    
    std::cout << "Horse " << horse1.getName() << " was written to the file. \n\n";

    fout.close();    // close output file

    return 0;
}
