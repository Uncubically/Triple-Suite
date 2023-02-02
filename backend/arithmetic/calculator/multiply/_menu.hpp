#ifndef BACKEND_ARITHMETIC_CALCULATOR_MULTIPLY
#define BACKEND_ARITHMETIC_CALCULATOR_MULTIPLY



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Calculator {
    class Multiply : public ProgramMenu {
        public:
            Multiply() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/multiply/title.txt");
                this->desc = "Multiplies two numbers.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float num1, num2;

                std::cout << "Please enter the value of the first number: ";
                std::cin >> num1;
                std::cout << "Please enter the value of the second number: ";
                std::cin >> num2;

                float answer = num1 * num2;

                std::cout<<"************************************************************************************************\n";
                std::cout << "\t\t\tThe product of " << num1 << " and " << num2 << " is = " << answer << std::endl;
                std::cout<<"************************************************************************************************\n";
            };
    };

	class MultiplyChoice : public ConsMenu::Choice {
        public:
            MultiplyChoice() : ConsMenu::Choice() {
                this->description = "Multiplication";
                this->menu = std::make_unique<Multiply>(Multiply());
            };
	};
};



#endif
