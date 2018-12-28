# HorseRecords

Program stores horse information. 
Horse info written to a .csv file 
(the output file is not fed through any other functions yet).

Program utilities are:
    save horse info
    change horse info
    remove horse info 
    search horse info

Utilites are accessed through main menu.

Application
    program exists within a while loop. 
    you will be presented with a main menu.
    from the main menu you will have access to all the utilities.

MainMenu
    main menu is comprised of a switch statement that handles user input.

    default case asks user to try again 

    case:
        exit   - breaks application loop leaving the program
        add    - runs SaveHorseInfo utility
        change - runs ChangeHorseInfo utility
        remove - runs RemoveHorseInfo utility
        search - runs SearcHorseInfo utility

SaveHorseInfo:
    - open info.csv
    - create horse obj
    - save horse info provided by user in horse obj
    - save horse obj info to info.csv
    - close info.csv


ChangeHorseInfo


RemoveHorseInfo


SearchHorseInfo


