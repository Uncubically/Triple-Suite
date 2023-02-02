#ifndef BACKEND_CONTROLFLOW_LOOP_FOR
#define BACKEND_CONTROLFLOW_LOOP_FOR



#include <iostream>
#include <memory>

#include "../../../menu/_init.hpp"

#include "../../program_menu.hpp"
#include "../../path.hpp"



namespace Looping {
    class For : public ProgramMenu {
        public:
            For() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/loop/for_title.txt");
                this->desc = "Looping through code using a 'for' loop.";
                // TODO creator
            };


            void run_program() override {
                for (int a = 1; a <= 10; a++) {
                    std::cout << "The value of a is: " << a << std::endl;
                }
            };
    };

	class ForChoice : public ConsMenu::Choice {
        public:
            ForChoice() : ConsMenu::Choice() {
                this->description = "For";
                this->menu = std::make_unique<For>(For());
            };
	};
};



#endif
