#ifndef BACKEND_ALGORITHMS__MENU
#define BACKEND_ALGORITHMS__MENU



#include <memory>

#include "menu/_init.hpp"

#include "./check_leap_year/_menu.hpp"
#include "./largest_element/_menu.hpp"
#include "./number_swap/_menu.hpp"
#include "./string_length/_menu.hpp"



namespace Algorithms {
    // Contains the choices for the "Algorithms" category.
    class AlgorithmsMenu : public ConsMenu::SelectMenu {
        public:
            AlgorithmsMenu() : ConsMenu::SelectMenu() {
                this->title = "Algorithms";
                this->desc = "Programs that execute simple algorithms in code.";

                this->choices.push_back(std::make_unique<StringLengthChoice>(StringLengthChoice()));
                this->choices.push_back(std::make_unique<NumberSwapChoice>(NumberSwapChoice()));
                this->choices.push_back(std::make_unique<LargestElementChoice>(LargestElementChoice()));
                this->choices.push_back(std::make_unique<LeapYearChoice>(LeapYearChoice()));
            };
    };

    class AlgorithmsChoice : public ConsMenu::Choice {
        public:
            AlgorithmsChoice() : ConsMenu::Choice() {
                this->description = "Algorithms";
                this->menu = std::make_unique<AlgorithmsMenu>(AlgorithmsMenu());
            };
    };
};



#endif