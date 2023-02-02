#ifndef BACKEND_SIMPLE_SYNTAX
#define BACKEND_SIMPLE_SYNTAX



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Simple {
    class Syntax : public ProgramMenu {
        public:
            Syntax() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/syntax/title.txt");
                this->desc = "Contains the syntax of the program.";
                this->creator = DevGroup::PMAKCJ;
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "simple/syntax/text.txt");
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
