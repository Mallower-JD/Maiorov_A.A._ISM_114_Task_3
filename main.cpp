#include <iostream>
#include "Liquid.h"

int main() {


    alcohol test = alcohol("Vodka", 1000, 0);
    std::cout << test << "\n";

    std::cout << "Set name ";
    std::string name;
    std::cin >> name;
    test.set_name(name);
    std::cout << "Liquid is: " << test.get_name() << "\n";

    std::cout << "Set density ";
    double density;
    std::cin >> density;
    test.set_density(density);
    std::cout << "Density is: " << test.get_density() << "\n";

    std::cout << "Set strength ";
    double strength;
    std::cin >> strength;
    test.set_strength(strength);
    std::cout << "Strength is: " << test.get_strength() << "\n";

    return 0;
};