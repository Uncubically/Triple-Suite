#ifndef BACKEND_ARITHMETIC_SHAPES_TRIANGLEAREA
#define BACKEND_ARITHMETIC_SHAPES_TRIANGLEAREA



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class TriangleArea : public ProgramMenu {
        public:
            TriangleArea() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/triangle_area/title.txt");
                this->desc = "Finds the area of a triangle.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float base, height, area;

                std::cout<<"Enter value of base:";
                std::cin>>base;

                std::cout<<"Enter value of height:";
                std::cin>>height;

                area = (base * height) / 2;

                std::cout<<"\n************************************************************************************************\n";
                std::cout<<"\t\tThe area of the triangle is:"<<area<<"\n";
                std::cout<<"************************************************************************************************\n";
            };
    };

	class TriangleAreaChoice : public ConsMenu::Choice {
        public:
            TriangleAreaChoice() : ConsMenu::Choice() {
                this->description = "Triangle Area";
                this->menu = std::make_unique<TriangleArea>(TriangleArea());
            };
	};
};



#endif
