#ifndef BACKEND_CONTROLFLOW_CONDITIONAL_ELSEIF
#define BACKEND_CONTROLFLOW_CONDITIONAL_ELSEIF



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Conditional {
    class ElseIf : public ProgramMenu {
        public:
            ElseIf() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/conditional/else_if/title.txt");
                this->desc = "Conditional multi-branching for branches > 2.";
                this->creator = DevGroup::PMAKCJ;
            };


            void run_program() override {
                int grade;

                std::cout << "Enter your grade: ";
                std::cin >> grade;
                std::cout << std::endl;

                if (grade == 100) {
                    std::cout << "Perfect grade!";
                } else if (grade >= 90) {
                    std::cout << "With Honors!";
                } else if (grade > 75) {
                    std::cout << "Passing!";
                } else {
                    std::cout << "Failed!";
                }
            };
    };

	class ElseIfChoice : public ConsMenu::Choice {
        public:
            ElseIfChoice() : ConsMenu::Choice() {
                this->description = "Else-If";
                this->menu = std::make_unique<ElseIf>(ElseIf());
            };
	};
};



#endif
