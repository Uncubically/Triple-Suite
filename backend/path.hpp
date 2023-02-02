#ifndef BACKEND_PATH
#define BACKEND_PATH



#include <iostream>
#include <string>
#include <filesystem>


std::string get_backend_path() {
    std::filesystem::path path = __FILE__;
    path = path / "..";

    std::stringstream ss;
    ss << path;
    std::string path_str = ss.str();
    return path_str.substr(1, path_str.size() - 2) + "/";
}


// The path of the folder.
const std::string backend_path = get_backend_path();



#endif