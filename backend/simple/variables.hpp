#ifndef BACKEND_SIMPLE_VARIABLES
#define BACKEND_SIMPLE_VARIABLES



#include <iostream>
#include <memory>

#include "../../menu/_init.hpp"

#include "../path.hpp"
#include "../program_menu.hpp"



namespace Simple {
    class Variables : public ProgramMenu {
        public:
            Variables() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/variables_title.txt");
                this->desc = "Contains information about variables.";
                // TODO this->creator = DevGroup::JCC_TUTORIAL_PROGRAM;
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "simple/variables_text.txt");

                int my_num = 18;
                std::cout << my_num;
            };
    };


    class VariablesChoice : public ConsMenu::Choice {
        public:
            VariablesChoice() : ConsMenu::Choice() {
                this->description = "Variables";
                this->menu = std::make_unique<Variables>(Variables());
            };
    };
};



#endif
