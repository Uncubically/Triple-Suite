#ifndef BACKEND_SIMPLE_YOURNAME
#define BACKEND_SIMPLE_YOURNAME



#include <iostream>
#include <memory>
#include <string>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Simple {
    class YourName : public ProgramMenu {
        public:
            YourName() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/your_name/title.txt");
                this->desc = "Outputs your name!";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                std::string name;
                std::cout << "Enter your Name: ";
                std::cin >> name;

                std::cout 
                    << std::endl
                    << std::endl 
                    << "************************************************************************************************" << std::endl
                    << "*                                                                                              *" << std::endl
                    << "*\t\t\t\t  Hello, My Name is "<<name<<"                                        *" << std::endl
                    << "*                                                                                              *" << std::endl
                    << "************************************************************************************************" << std::endl
                    << "\n\n\n";
            };
    };


    class YourNameChoice : public ConsMenu::Choice {
        public:
            YourNameChoice() : ConsMenu::Choice() {
                this->description = "Your Name";
                this->menu = std::make_unique<YourName>(YourName());
            };
    };
};



#endif
