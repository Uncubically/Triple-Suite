#ifndef BACKEND_CONTROLFLOW_CONDITIONAL__MENU
#define BACKEND_CONTROLFLOW_CONDITIONAL__MENU



#include <memory>

#include "../../../menu/_init.hpp"



namespace Conditional {
    // Contains the choices for the "Conditional" category.
    class ConditionalMenu : public ConsMenu::SelectMenu {
        public:
            ConditionalMenu() : ConsMenu::SelectMenu() {
                this->title = "Conditional";
                this->desc = "Programs relating to conditions.";
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