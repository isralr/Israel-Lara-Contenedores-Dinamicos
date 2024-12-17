#include "Introducción_a_Boost.h"
#include <iostream>
#include <boost/lexical_cast.hpp>

void ejercicio6() {
    std::string s = "12345";

    try {
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(boost::bad_lexical_cast &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}