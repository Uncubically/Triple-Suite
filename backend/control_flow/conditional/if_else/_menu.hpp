#ifndef BACKEND_CONTROLFLOW_CONDITIONAL_IFELSE
#define BACKEND_CONTROLFLOW_CONDITIONAL_IFELSE



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Conditional {
    class IfElse : public ProgramMenu {
        public:
            IfElse() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/conditional/if_else/title.txt");
                this->desc = "Contains information about the \"if\" and \"else\" keywords and conditional multi-branching.";
                // TODO creator
            };


            void run_program() override {
                int x;

                std::cout << "Enter value: ";
                std::cin >> x;
                std::cout << std::endl;

                if (x >= 50) {
                    std::cout << "The value is greater than or equal 50.";
                } else {
                    std::cout << "The value is lesser than 50.";
                }
            };
    };

	class IfElseChoice : public ConsMenu::Choice {
        public:
            IfElseChoice() : ConsMenu::Choice() {
                this->description = "If-Else";
                this->menu = std::make_unique<IfElse>(IfElse());
            };
	};
};



#endif
