#ifndef BACKEND_ARITHMETIC_CALCULATOR_ADD
#define BACKEND_ARITHMETIC_CALCULATOR_ADD



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Calculator {
    class Add : public ProgramMenu {
        public:
            Add() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/add/title.txt");
                this->desc = "Adds two numbers.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float num1, num2;

                std::cout << "Please enter the value of the first number: ";
                std::cin >> num1;
                std::cout << "Please enter the value of the second number: ";
                std::cin >> num2;

                float answer = num1 + num2;

                std::cout<<"************************************************************************************************\n";
                std::cout << "\t\t\tThe sum of " << num1 << " and " << num2 << " is = " << answer << std::endl;
                std::cout<<"************************************************************************************************\n";
            };
    };

	class AddChoice : public ConsMenu::Choice {
        public:
            AddChoice() : ConsMenu::Choice() {
                this->description = "Addition";
                this->menu = std::make_unique<Add>(Add());
            };
	};
};



#endif
