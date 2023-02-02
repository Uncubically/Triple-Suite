#ifndef BACKEND_CONTROLFLOW_CONDITIONAL_SWITCH
#define BACKEND_CONTROLFLOW_CONDITIONAL_SWITCH



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Conditional {
    class Switch : public ProgramMenu {
        public:
            Switch() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "control_flow/conditional/switch/title.txt");
                this->desc = "Conditional multi-branching for branches > 2 using switch statements.";
                // TODO creator
            };


            void run_program() override {
                char letter;

                std::cout << "What's your order ma'am/sir? (a / b / c): ";
                std::cin >> letter;
                std::cout << std::endl;

                switch (letter) {
                    case 'a':
                        std::cout << "Apple";
                        break;
                    case 'b':
                        std::cout << "Banana";
                        break;
                    case 'c':
                        std::cout << "Coconut";
                        break;
                    default:
                        std::cout << "Sorry, that's not in the menu.";
                        break;
                }
            };
    };

	class SwitchChoice : public ConsMenu::Choice {
        public:
            SwitchChoice() : ConsMenu::Choice() {
                this->description = "Switch";
                this->menu = std::make_unique<Switch>(Switch());
            };
	};
};



#endif
