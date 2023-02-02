#ifndef BACKEND_SIMPLE_INTRODUCTION
#define BACKEND_SIMPLE_INTRODUCTION



#include <iostream>
#include <memory>

#include "../../menu/_init.hpp"

#include "../path.hpp"
#include "../program_menu.hpp"



namespace Simple {
    class Introduction : public ProgramMenu {
        public:
            Introduction() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/introduction_title.txt");
                this->desc = "Contains the introduction of C++.";
                // TODO this->creator = DevGroup::JCC_TUTORIAL_PROGRAM;
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "simple/introduction_text.txt");
            };
    };


    class IntroductionChoice : public ConsMenu::Choice {
        public:
            IntroductionChoice() : ConsMenu::Choice() {
                this->description = "Syntax";
                this->menu = std::make_unique<Introduction>(Introduction());
            };
    };
};



#endif
