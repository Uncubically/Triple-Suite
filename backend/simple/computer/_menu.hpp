#ifndef BACKEND_SIMPLE_COMPUTER
#define BACKEND_SIMPLE_COMPUTER



#include <iostream>
#include <memory>
#include <string>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Simple {
    class Computer : public ProgramMenu {
        public:
            Computer() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/computer/title.txt");
                this->desc = "Computer art!";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "simple/computer/text.txt");
            };
    };


    class ComputerChoice : public ConsMenu::Choice {
        public:
            ComputerChoice() : ConsMenu::Choice() {
                this->description = "Computer Art";
                this->menu = std::make_unique<Computer>(Computer());
            };
    };
};



#endif
