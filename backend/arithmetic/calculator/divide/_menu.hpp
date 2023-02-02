#ifndef BACKEND_ARITHMETIC_CALCULATOR_DIVIDE
#define BACKEND_ARITHMETIC_CALCULATOR_DIVIDE



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Calculator {
    class Divide : public ProgramMenu {
        public:
            Divide() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/divide/title.txt");
                this->desc = "Divides two numbers.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float num1, num2;

                std::cout << "Please enter the value of the first number: ";
                std::cin >> num1;
                std::cout << "Please enter the value of the second number: ";
                std::cin >> num2;

                float answer = num1 / num2;

                std::cout<<"************************************************************************************************\n";
                std::cout << "\t\t\tThe quotient of " << num1 << " and " << num2 << " is = " << answer << std::endl;
                std::cout<<"************************************************************************************************\n";
            };
    };

	class DivideChoice : public ConsMenu::Choice {
        public:
            DivideChoice() : ConsMenu::Choice() {
                this->description = "Division";
                this->menu = std::make_unique<Divide>(Divide());
            };
	};
};



#endif
