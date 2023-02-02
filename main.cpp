#include <iostream>

#include "backend/_init.hpp"



int main() {
    Console::clear_console();

    // Prompts the user to maximize the window.
    std::cout
        << "Please maximize the window." << std::endl
        << "Press enter to run the program." << std::endl;

    Console::enter_to_exit(false);


    Backend::Menu().show();

    return 0;
};
