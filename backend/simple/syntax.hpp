#ifndef BACKEND_SIMPLE_SYNTAX
#define BACKEND_SIMPLE_SYNTAX



#include <iostream>
#include <memory>

#include "../../menu/_init.hpp"

#include "../path.hpp"
#include "../program_menu.hpp"



namespace Simple {
    class Syntax : public ProgramMenu {
        public:
            Syntax() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/syntax_title.txt");
                this->desc = "Contains the syntax of the program.";
                // TODO this->creator = DevGroup::JCC_TUTORIAL_PROGRAM;
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "simple/syntax_text.txt");
            };
    };


    class SyntaxChoice : public ConsMenu::Choice {
        public:
            SyntaxChoice() : ConsMenu::Choice() {
                this->description = "Syntax";
                this->menu = std::make_unique<Syntax>(Syntax());
            };
    };
};



#endif
