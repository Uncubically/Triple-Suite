#ifndef BACKEND_ARITHMETIC_SHAPES_CIRCLEAREA
#define BACKEND_ARITHMETIC_SHAPES_CIRCLEAREA



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class CircleArea : public ProgramMenu {
        public:
            CircleArea() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/shapes/circle_area/title.txt");
                this->desc = "Finds the area of a circle.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float radius, area;

                std::cout<<"\t\tEnter value of radius:";
                std::cin>>radius;
                area = 3.14 * radius * radius;

                std::cout<<"\n************************************************************************************************\n";
                std::cout<<"\t\tThe area of the Circle is: "<< area <<"\n";
                std::cout<<"************************************************************************************************\n";
            };
    };

	class CircleAreaChoice : public ConsMenu::Choice {
        public:
            CircleAreaChoice() : ConsMenu::Choice() {
                this->description = "Circle Area";
                this->menu = std::make_unique<CircleArea>(CircleArea());
            };
	};
};



#endif
