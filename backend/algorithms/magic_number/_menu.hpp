#ifndef BACKEND_ALGORITHMS_MAGICNUMBER
#define BACKEND_ALGORITHMS_MAGICNUMBER



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Algorithms {
    class MagicNumber : public ProgramMenu {
        public:
            MagicNumber() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "algorithms/magic_number/title.txt");
                this->desc = "Try to guess the magic number!";
                this->creator = DevGroup::C_FOR_ALL;
            };


            void run_program() override {
                int magic_num; 
 
                std::cout << "Guess the magic number from 1-10: ";
                std::cin >> magic_num;

                    if (magic_num == 6) {
                        std::cout
                            << "************************************************************************************************\n"
                            <<"\t\t\tCongrats you guess the magic number! \n"
                            <<"*************************************************************************************************\n";
                    } else {
                        std::cout<<"ohhh tooo BAD its not you're lucky day!";
                    }
            };
    };

	class MagicNumberChoice : public ConsMenu::Choice {
        public:
            MagicNumberChoice() : ConsMenu::Choice() {
                this->description = "Magic Number";
                this->menu = std::make_unique<MagicNumber>(MagicNumber());
            };
	};
};



#endif
