#ifndef BACKEND_ARITHMETIC_SHAPES_SQUAREAREA
#define BACKEND_ARITHMETIC_SHAPES_SQUAREAREA



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class SquareArea : public ProgramMenu {
        public:
            SquareArea() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/shapes/square_area/title.txt");
                this->desc = "Finds the area of a square.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float length, area;

                std::cout << "Enter length of sides: ";
                std::cin >> length;

                area = length * length;

                std::cout << "\n************************************************************************************************\n";
                std::cout << "\t\tThe area of the Square is "<< area <<"\n";
                std::cout << "************************************************************************************************\n";
            };
    };

	class SquareAreaChoice : public ConsMenu::Choice {
        public:
            SquareAreaChoice() : ConsMenu::Choice() {
                this->description = "Square Area";
                this->menu = std::make_unique<SquareArea>(SquareArea());
            };
	};
};



#endif
