#ifndef BACKEND_CONTROLFLOW_CONDITIONAL__MENU
#define BACKEND_CONTROLFLOW_CONDITIONAL__MENU



#include <memory>

#include "../../../menu/_init.hpp"



namespace Loop {
    // Contains the choices for the "Loop" category.
    class LoopMenu : public ConsMenu::SelectMenu {
        public:
            LoopMenu() : ConsMenu::SelectMenu() {
                this->title = "Loop";
                this->desc = "Programs relating to loops.";
            };
    };

    class LoopChoice : public ConsMenu::Choice {
        public:
            LoopChoice() : ConsMenu::Choice() {
                this->description = "Loop";
                this->menu = std::make_unique<LoopMenu>(LoopMenu());
            };
    };
};



#endif