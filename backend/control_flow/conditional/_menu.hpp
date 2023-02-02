#ifndef BACKEND_CONTROLFLOW_CONDITIONAL__MENU
#define BACKEND_CONTROLFLOW_CONDITIONAL__MENU



#include <memory>

#include <menu/_init.hpp>

#include "./if/_menu.hpp"
#include "./if_else/_menu.hpp"
#include "./else_if/_menu.hpp"
#include "./switch/_menu.hpp"



namespace Conditional {
    // Contains the choices for the "Conditional" category.
    class ConditionalMenu : public ConsMenu::SelectMenu {
        public:
            ConditionalMenu() : ConsMenu::SelectMenu() {
                this->title = "Conditional";
                this->desc = "Programs relating to conditions.";

                this->choices.push_back(std::make_unique<IfChoice>(IfChoice()));
                this->choices.push_back(std::make_unique<IfElseChoice>(IfElseChoice()));
                this->choices.push_back(std::make_unique<ElseIfChoice>(ElseIfChoice()));
                this->choices.push_back(std::make_unique<SwitchChoice>(SwitchChoice()));
            };
    };

    class ConditionalChoice : public ConsMenu::Choice {
        public:
            ConditionalChoice() : ConsMenu::Choice() {
                this->description = "Conditional";
                this->menu = std::make_unique<ConditionalMenu>(ConditionalMenu());
            };
    };
};



#endif