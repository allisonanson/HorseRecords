#include "Horse.h"

int main()
{
    // file declaration and opening
    std::ofstream fout;
    fout.open ("info.csv", std::ios::app);

    Horse horse1;
    
    horse1.inputName();
    fout << "\n------------ \nName: " << horse1.getName() << std::endl;
    
    std::cout << "Horse " << horse1.getName() << " was written to the file. \n\n";

    fout.close();    // close output file

    return 0;
}
