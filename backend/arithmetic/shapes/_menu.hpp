#ifndef BACKEND_ARITHMETIC_SHAPES__MENU
#define BACKEND_ARITHMETIC_SHAPES__MENU



#include <memory>

#include <menu/_init.hpp>

#include "./circle_area/_menu.hpp"
#include "./circle_circum/_menu.hpp"
#include "./ellipse_area/_menu.hpp"
#include "./parall_area/_menu.hpp"
#include "./rect_area/_menu.hpp"
#include "./square_area/_menu.hpp"
#include "./trapezoid_area/_menu.hpp"
#include "./triangle_area/_menu.hpp"



namespace Arithmetic {
    // Contains the choices for the "Shape" category.
    class ShapesMenu : public ConsMenu::SelectMenu {
        public:
            ShapesMenu() : ConsMenu::SelectMenu() {
                this->title = "Shapes";
                this->desc = "Contains programs to calculate things regarding basic shapes.";

                this->choices.push_back(std::make_unique<Shapes::CircleAreaChoice>(Shapes::CircleAreaChoice()));
                this->choices.push_back(std::make_unique<Shapes::CircleCircumChoice>(Shapes::CircleCircumChoice()));
                this->choices.push_back(std::make_unique<Shapes::EllipseAreaChoice>(Shapes::EllipseAreaChoice()));
                this->choices.push_back(std::make_unique<Shapes::ParallAreaChoice>(Shapes::ParallAreaChoice()));
                this->choices.push_back(std::make_unique<Shapes::RectAreaChoice>(Shapes::RectAreaChoice()));
                this->choices.push_back(std::make_unique<Shapes::SquareAreaChoice>(Shapes::SquareAreaChoice()));
                this->choices.push_back(std::make_unique<Shapes::TrapezoidAreaChoice>(Shapes::TrapezoidAreaChoice()));
                this->choices.push_back(std::make_unique<Shapes::TriangleAreaChoice>(Shapes::TriangleAreaChoice()));
            };
    };

    class ShapesChoice : public ConsMenu::Choice {
        public:
            ShapesChoice() : ConsMenu::Choice() {
                this->description = "Shape";
                this->menu = std::make_unique<ShapesMenu>(ShapesMenu());
            };
    };
};



#endif