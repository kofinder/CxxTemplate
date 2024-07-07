#include <iostream>
#include "my_lib.h"

#include <cxxopts.hpp>
#include <fmt/format.h>
#include <spdlog/spdlog.h>
#include <nlohmann/json.hpp>

void print_hello_world() {
    std::cout << "HELLO WORLD" << "\n";

    std::cout << "NOLHMANN VERSION:"
    << NLOHMANN_JSON_VERSION_MAJOR << "."
    << NLOHMANN_JSON_VERSION_MINOR << "."
    << NLOHMANN_JSON_VERSION_PATCH << "\n";

    std::cout << "FMT_VERSION:"
    << FMT_VERSION << "\n";

    std::cout << "CXXOPTS_VERSION:"
    << CXXOPTS__VERSION_MAJOR << "."
    << CXXOPTS__VERSION_MINOR << "."
    << CXXOPTS__VERSION_PATCH << "\n";    
    
}