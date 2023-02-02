#ifndef BACKEND_SIMPLE__MENU
#define BACKEND_SIMPLE__MENU



#include <memory>

#include <menu/_init.hpp>

#include "./hello_world/_menu.hpp"
#include "./introduction/_menu.hpp"
#include "./syntax/_menu.hpp"
#include "./variables/_menu.hpp"
#include "./comments/_menu.hpp"
#include "./input_output/_menu.hpp"
#include "./birthday/_menu.hpp"
#include "./computer/_menu.hpp"
#include "./your_name/_menu.hpp"



namespace Simple {
    // Contains the choices for the "Simple" category.
    class SimpleMenu : public ConsMenu::SelectMenu {
        public:
            SimpleMenu() : ConsMenu::SelectMenu() {
                this->title = "Simple Programs";
                this->desc = "Simple programs to start off your journey.";

                this->choices.push_back(std::make_unique<HelloWorldChoice>(HelloWorldChoice()));
                this->choices.push_back(std::make_unique<IntroductionChoice>(IntroductionChoice()));
                this->choices.push_back(std::make_unique<SyntaxChoice>(SyntaxChoice()));
                this->choices.push_back(std::make_unique<VariablesChoice>(VariablesChoice()));
                this->choices.push_back(std::make_unique<CommentsChoice>(CommentsChoice()));
                this->choices.push_back(std::make_unique<InputOutputChoice>(InputOutputChoice()));
                this->choices.push_back(std::make_unique<BirthdayChoice>(BirthdayChoice()));
                this->choices.push_back(std::make_unique<ComputerChoice>(ComputerChoice()));
                this->choices.push_back(std::make_unique<YourNameChoice>(YourNameChoice()));
            };
    };

    class SimpleChoice : public ConsMenu::Choice {
        public:
            SimpleChoice() : ConsMenu::Choice() {
                this->description = "Simple Programs";
                this->menu = std::make_unique<SimpleMenu>(SimpleMenu());
            };
    };
};



#endif