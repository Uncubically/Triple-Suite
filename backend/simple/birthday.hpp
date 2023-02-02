#ifndef BACKEND_SIMPLE_BIRTHDAY
#define BACKEND_SIMPLE_BIRTHDAY



#include <iostream>
#include <memory>
#include <string>

#include "../../menu/_init.hpp"

#include "../path.hpp"
#include "../program_menu.hpp"



namespace Simple {
    class Birthday : public ProgramMenu {
        public:
            Birthday() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/birthday_title.txt");
                this->desc = "Happy Birthday! I don't really know if it *is* your birthday today, but whatever!";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "simple/birthday_text.txt");
            };
    };


    class BirthdayChoice : public ConsMenu::Choice {
        public:
            BirthdayChoice() : ConsMenu::Choice() {
                this->description = "Happy Birthday";
                this->menu = std::make_unique<Birthday>(Birthday());
            };
    };
};



#endif
