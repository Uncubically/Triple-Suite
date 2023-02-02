#ifndef BACKEND_SIMPLE_COMMENTS
#define BACKEND_SIMPLE_COMMENTS



#include <iostream>
#include <memory>

#include "../../menu/_init.hpp"

#include "../path.hpp"
#include "../program_menu.hpp"



namespace Simple {
    class Comments : public ProgramMenu {
        public:
            Comments() : ProgramMenu() {
                // Setting menu's title and description
                this->title = File::read_str_file(backend_path + "simple/comments_title.txt");
                this->desc = "Contains information about comments.";
                // TODO this->creator = DevGroup::JCC_TUTORIAL_PROGRAM;
            };


            void run_program() override {
                std::cout << File::read_str_file(backend_path + "simple/comments_text.txt");
            };
    };


    class CommentsChoice : public ConsMenu::Choice {
        public:
            CommentsChoice() : ConsMenu::Choice() {
                this->description = "Comments";
                this->menu = std::make_unique<Comments>(Comments());
            };
    };
};



#endif
