#ifndef BACKEND_CONTROLFLOW_CONDITIONAL_IF
#define BACKEND_CONTROLFLOW_CONDITIONAL_IF



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Conditional {
    class If : public ProgramMenu {
        public:
            If() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/conditional/if/title.txt");
                this->desc = "Contains information about the \"if\" keyword and conditional branching.";
                // TODO creator
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "control_flow/conditional/if/text.txt");

                std::cout << "Identify if age is eligible to vote" << std::endl;
                int age;

                std::cout << "Enter age: ";
                std::cin >> age;

                if (age >= 18) {
                    std::cout << "You are elligible to vote!";
                }
            };
    };

	class IfChoice : public ConsMenu::Choice {
        public:
            IfChoice() : ConsMenu::Choice() {
                this->description = "If";
                this->menu = std::make_unique<If>(If());
            };
	};
};



#endif
