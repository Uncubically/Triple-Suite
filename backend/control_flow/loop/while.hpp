#ifndef BACKEND_CONTROLFLOW_LOOP_WHILE
#define BACKEND_CONTROLFLOW_LOOP_WHILE



#include <iostream>
#include <memory>

#include "../../../menu/_init.hpp"

#include "../../program_menu.hpp"
#include "../../path.hpp"



namespace Loop {
    class While : public ProgramMenu {
        public:
            While() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/loop/while_title.txt");
                this->desc = "Looping through code using a 'while' loop.";
                // TODO creator
            };


            void run_program() override {
                int b = 1;
                while (b <= 10) {
                    std::cout << "The value of b is: " << b;
                    b++;
                }
            };
    };

	class WhileChoice : public ConsMenu::Choice {
        public:
            WhileChoice() : ConsMenu::Choice() {
                this->description = "While";
                this->menu = std::make_unique<While>(While());
            };
	};
};



#endif
