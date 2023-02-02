#ifndef BACKEND_CONTROLFLOW_LOOP__MENU
#define BACKEND_CONTROLFLOW_LOOP__MENU



#include <memory>

#include <menu/_init.hpp>

#include "./for/_menu.hpp"
#include "./while/_menu.hpp"
#include "./do_while/_menu.hpp"



namespace Looping {
    // Contains the choices for the "Loop" category.
    class LoopMenu : public ConsMenu::SelectMenu {
        public:
            LoopMenu() : ConsMenu::SelectMenu() {
                this->title = "Looping";
                this->desc = "Programs relating to loops.";

                this->choices.push_back(std::make_unique<ForChoice>(ForChoice()));
                this->choices.push_back(std::make_unique<WhileChoice>(WhileChoice()));
                this->choices.push_back(std::make_unique<DoWhileChoice>(DoWhileChoice()));
            };
    };

    class LoopChoice : public ConsMenu::Choice {
        public:
            LoopChoice() : ConsMenu::Choice() {
                this->description = "Looping";
                this->menu = std::make_unique<LoopMenu>(LoopMenu());
            };
    };
};



#endif