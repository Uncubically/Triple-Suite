#ifndef BACKEND_ALGORITHMS_STRINGLENGTH
#define BACKEND_ALGORITHMS_STRINGLENGTH



#include <iostream>
#include <memory>

#include <menu/_init.hpp>

#include <backend/program_menu.hpp>
#include <backend/path.hpp>



namespace Algorithms {
    class StringLength : public ProgramMenu {
        public:
            StringLength() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "algorithms/string_length/title.txt");
                this->desc = "Counts how many characters there are in the input.";
                this->creator = DevGroup::JCC_TUTORIAL_PROGRAM;
            };


            void run_program() override {
                std::string str;
                std::cout << "Please input a word to be counted: ";
                std::cin >> str;

                int i = 0;
                for(; str[i] != *"\0"; i++); // keep adding i until the current char is null

                std::cout << i;
            };
    };

	class StringLengthChoice : public ConsMenu::Choice {
        public:
            StringLengthChoice() : ConsMenu::Choice() {
                this->description = "String Length";
                this->menu = std::make_unique<StringLength>(StringLength());
            };
	};
}



#endif
