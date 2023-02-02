#ifndef BACKEND_PROGRAMMENU
#define BACKEND_PROGRAMMENU


#include <string>

#include "../cpp_utils/_init.hpp"
#include "../menu/_init.hpp"



enum DevGroup {
    JCC_TUTORIAL_PROGRAM,
    C_FOR_ALL,
    PMAKCJ
};

std::string dev_groups[] = {
    "James Chris Brown C++ Tutorial Program",
    "C++ For All",
    "PMAKCJ C++ Tutorials"
};


// A type of menu where a program can be run.
class ProgramMenu : public ConsMenu::Menu {
    public:
        DevGroup creator;

        void show_header() override {
            Console::Color::SpecStyle base = Console::Color::SpecStyle::from_genstyle(this->base_color);

            this->show_border();
            std::cout
                << this->title_specstyle.get_str() << this->title << std::endl
                << this->desc_specstyle.get_str() << this->desc << std::endl
                << "This program was created by " << dev_groups[this->creator] << "." << std::endl;
            this->show_border();
            std::cout << base.get_str() << std::endl;
        };


        // Runs the program.
        virtual void run_program() {};

        void show() override {
            Console::clear_console();
            this->show_header();

            Console::flush_streams();

            this->run_program();
            std::cout << std::endl << std::endl << std::endl;

            if (std::cin.fail()) {
                Console::Color::SpecStyle error_spec(false, Console::Color::black, Console::Color::red, true);
                std::cout << error_spec.get_str() << "The input created an error." << std::endl;
                Console::flush_streams();
            };
            Console::enter_to_exit();
        }
};



#endif