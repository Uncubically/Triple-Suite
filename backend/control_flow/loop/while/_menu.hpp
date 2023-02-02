#ifndef BACKEND_CONTROLFLOW_LOOP_WHILE
#define BACKEND_CONTROLFLOW_LOOP_WHILE



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Looping {
    class While : public ProgramMenu {
        public:
            While() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/loop/while/title.txt");
                this->desc = "Looping through code using a 'while' loop.";
                this->creator = DevGroup::PMAKCJ;
            };


            void run_program() override {
                int b = 1;
                while (b <= 10) {
                    std::cout << "The value of b is: " << b << std::endl;
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
