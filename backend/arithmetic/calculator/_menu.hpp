#ifndef BACKEND_ARITHMETIC_CALCULATOR__MENU
#define BACKEND_ARITHMETIC_CALCULATOR__MENU



#include <memory>

#include <menu/_init.hpp>

#include "./add/_menu.hpp"
#include "./subtract/_menu.hpp"
#include "./multiply/_menu.hpp"
#include "./divide/_menu.hpp"



namespace Arithmetic {
    // Contains the choices for the "Calculator" category.
    class CalculatorMenu : public ConsMenu::SelectMenu {
        public:
            CalculatorMenu() : ConsMenu::SelectMenu() {
                this->title = "Calculator";
                this->desc = "Basic Calculator!";

                this->choices.push_back(std::make_unique<Calculator::AddChoice>(Calculator::AddChoice()));
                this->choices.push_back(std::make_unique<Calculator::SubtractChoice>(Calculator::SubtractChoice()));
                this->choices.push_back(std::make_unique<Calculator::MultiplyChoice>(Calculator::MultiplyChoice()));
                this->choices.push_back(std::make_unique<Calculator::DivideChoice>(Calculator::DivideChoice()));
            };
    };

    class CalculatorChoice : public ConsMenu::Choice {
        public:
            CalculatorChoice() : ConsMenu::Choice() {
                this->description = "Calculator";
                this->menu = std::make_unique<CalculatorMenu>(CalculatorMenu());
            };
    };
};



#endif