#ifndef BACKEND_SIMPLE_INPUTOUTPUT
#define BACKEND_SIMPLE_INPUTOUTPUT



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Simple {
    class InputOutput : public ProgramMenu {
        public:
            InputOutput() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/input_output/title.txt");
                this->desc = "Contains information about taking inputs and outputting.";
                // TODO this->creator = DevGroup::JCC_TUTORIAL_PROGRAM;
            };


            void run_program() override {
                int my_num;
                std::cout << "Input a number: ";
                std::cin >> my_num;
                std::cout << my_num;
            };
    };


    class InputOutputChoice : public ConsMenu::Choice {
        public:
            InputOutputChoice() : ConsMenu::Choice() {
                this->description = "Input + Output";
                this->menu = std::make_unique<InputOutput>(InputOutput());
            };
    };
};



#endif
