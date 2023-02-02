#ifndef BACKEND_ARITHMETIC_SHAPES_CIRCLECIRCUM
#define BACKEND_ARITHMETIC_SHAPES_CIRCLECIRCUM



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class CircleCircum : public ProgramMenu {
        public:
            CircleCircum() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/circle_circum/title.txt");
                this->desc = "Finds the circumference of a circle.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float radius,circumference; //declaring a variable

                std::cout << "Enter vaue of radius:";
                std::cin >> radius;

                circumference = 2 * 3.141592 * radius;

                std::cout << "\n************************************************************************************************\n";
                std::cout << "The circumference of the circle is "<< circumference <<"\n";
                std::cout << "************************************************************************************************\n";
            };
    };

	class CircleCircumChoice : public ConsMenu::Choice {
        public:
            CircleCircumChoice() : ConsMenu::Choice() {
                this->description = "Circle Circumference";
                this->menu = std::make_unique<CircleCircum>(CircleCircum());
            };
	};
};



#endif
