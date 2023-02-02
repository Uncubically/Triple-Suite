#ifndef BACKEND_SIMPLE_INTRODUCTION
#define BACKEND_SIMPLE_INTRODUCTION



#include <iostream>
#include <memory>
#include <string>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Simple {
    class Introduction : public ProgramMenu {
        public:
            Introduction() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/introduction/title.txt");
                this->desc = "Contains the introduction of C++.";
                this->creator = DevGroup::PMAKCJ;
            };


            void run_program() override {
                std::string test = File::read_str_file(backend_path + "simple/introduction/text.txt");
                std::cout << test;
            };
    };


    class IntroductionChoice : public ConsMenu::Choice {
        public:
            IntroductionChoice() : ConsMenu::Choice() {
                this->description = "Introduction";
                this->menu = std::make_unique<Introduction>(Introduction());
            };
    };
};



#endif
