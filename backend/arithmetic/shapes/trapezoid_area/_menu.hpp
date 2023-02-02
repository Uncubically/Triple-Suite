#ifndef BACKEND_ARITHMETIC_SHAPES_TRAPEZOIDAREA
#define BACKEND_ARITHMETIC_SHAPES_TRAPEZOIDAREA



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class TrapezoidArea : public ProgramMenu {
        public:
            TrapezoidArea() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/shapes/trapezoid_area/title.txt");
                this->desc = "Finds the area of a trapezoid.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float basetop, basebot, height, area;

                std::cout << "Enter value of base top:";
                std::cin >> basetop;

                std::cout << "Enter value of base bot:";
                std::cin >> basebot;

                std::cout << "Enter value of height:";
                std::cin >> height;

                area = (basetop + basebot) / (2 * height);

                std::cout<<"\n************************************************************************************************\n";
                std::cout<<"\t\tThe area of Trapezoid is:"<<area<<"\n";
                std::cout<<"************************************************************************************************\n";
            };
    };

	class TrapezoidAreaChoice : public ConsMenu::Choice {
        public:
            TrapezoidAreaChoice() : ConsMenu::Choice() {
                this->description = "Trapezoid Area";
                this->menu = std::make_unique<TrapezoidArea>(TrapezoidArea());
            };
	};
};



#endif
