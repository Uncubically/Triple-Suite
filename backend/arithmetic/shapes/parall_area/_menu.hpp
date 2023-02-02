#ifndef BACKEND_ARITHMETIC_SHAPES_PARALLAREA
#define BACKEND_ARITHMETIC_SHAPES_PARALLAREA



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Shapes {
    class ParallArea : public ProgramMenu {
        public:
            ParallArea() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "arithmetic/calculator/parall_area/title.txt");
                this->desc = "Finds the area of a parallelogram.";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                float base, height, area;

                std::cout<<"Enter value of base: ";
                std::cin >> base;
                std::cout<<"Enter value of height: ";
                std::cin >> height;
                area = base * height;

                std::cout<<"\n************************************************************************************************\n";
                std::cout<<"\t\tThe area of Parallelogram is: "<< area <<"\n";
                std::cout<<"************************************************************************************************\n";
            };
    };

	class ParallAreaChoice : public ConsMenu::Choice {
        public:
            ParallAreaChoice() : ConsMenu::Choice() {
                this->description = "Parallelogram Area";
                this->menu = std::make_unique<ParallArea>(ParallArea());
            };
	};
};



#endif
