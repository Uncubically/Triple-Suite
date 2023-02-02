#ifndef BACKEND_ARITHMETIC_SHAPES_ELLIPSEAREA
#define BACKEND_ARITHMETIC_SHAPES_ELLIPSEAREA



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class EllipseArea : public ProgramMenu {
        public:
            EllipseArea() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/ellipse_area/title.txt");
                this->desc = "Finds the area of an ellipse.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float axis_x, axis_y, area;

                std::cout << "Enter value of X:";
                std::cin >> axis_x;

                std::cout << "Enter value of Y:";
                std::cin >> axis_y;

                area = 3.14 * axis_x * axis_y;

                std::cout << "\n************************************************************************************************\n";
                std::cout << "\t\tThe area of Ellipse is "<< area <<"\n";
                std::cout << "************************************************************************************************\n";
            };
    };

	class EllipseAreaChoice : public ConsMenu::Choice {
        public:
            EllipseAreaChoice() : ConsMenu::Choice() {
                this->description = "Ellipse Area";
                this->menu = std::make_unique<EllipseArea>(EllipseArea());
            };
	};
};



#endif
