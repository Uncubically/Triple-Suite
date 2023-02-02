#ifndef BACKEND_CONTROLFLOW_LOOP_DOWHILE
#define BACKEND_CONTROLFLOW_LOOP_DOWHILE



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Looping {
    class DoWhile : public ProgramMenu {
        public:
            DoWhile() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/loop/do_while/title.txt");
                this->desc = "Looping through code using a 'do-while' loop.";
                // TODO creator
            };


            void run_program() override {
                int c = 1;
                do {
                    std::cout << "The value of c is: " << c << std::endl;
                    c++;
                } while (c <= 10);
            };
    };

	class DoWhileChoice : public ConsMenu::Choice {
        public:
            DoWhileChoice() : ConsMenu::Choice() {
                this->description = "Do-While";
                this->menu = std::make_unique<DoWhile>(DoWhile());
            };
	};
};



#endif
