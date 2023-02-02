#ifndef BACKEND_CONTROLFLOW__MENU
#define BACKEND_CONTROLFLOW__MENU



#include <memory>

#include "../../menu/_init.hpp"

#include "./conditional/_menu.hpp"
#include "./loop/_menu.hpp"



namespace ControlFlow {
    // Contains the choices for the "ControlFlow" category.
    class ControlFlowMenu : public ConsMenu::SelectMenu {
        public:
            ControlFlowMenu() : ConsMenu::SelectMenu() {
                this->title = "Control Flow";
                this->desc = "Programs relating to how the program moves across its statements.";

                this->choices.push_back(std::make_unique<Conditional::ConditionalChoice>(Conditional::ConditionalChoice()));
                this->choices.push_back(std::make_unique<Looping::LoopChoice>(Looping::LoopChoice()));
            };
    };

    class ControlFlowChoice : public ConsMenu::Choice {
        public:
            ControlFlowChoice() : ConsMenu::Choice() {
                this->description = "Control Flow";
                this->menu = std::make_unique<ControlFlowMenu>(ControlFlowMenu());
            };
    };
};



#endif