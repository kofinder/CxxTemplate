#include <iostream>
#include "my_lib.h"
#include "config.hpp"
#include <nlohmann/json.hpp>

int main() {

    // int i;

    // int x[2];
    // x[2] = 1234;
    
    std::cout << project_name << "\n";
    std::cout << project_version << "\n";

    print_hello_world();

    return 0;
}