#ifndef BACKEND_ARITHMETIC_SHAPES_RECTAREA
#define BACKEND_ARITHMETIC_SHAPES_RECTAREA



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class RectArea : public ProgramMenu {
        public:
            RectArea() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/rect_area/title.txt");
                this->desc = "Finds the area of a rectangle.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float height, width, area;

                std::cout<<"Enter value of height:";
                std::cin>>height;
                std::cout<<"Enter value of width:";
                std::cin>>width;
                
                area = height * width;

                std::cout<<"\n************************************************************************************************\n";
                std::cout<<"\t\tThe area of Rectangle is "<< area <<"\n";
                std::cout<<"************************************************************************************************\n";
            };
    };

	class RectAreaChoice : public ConsMenu::Choice {
        public:
            RectAreaChoice() : ConsMenu::Choice() {
                this->description = "Rectangle Area";
                this->menu = std::make_unique<RectArea>(RectArea());
            };
	};
};



#endif
