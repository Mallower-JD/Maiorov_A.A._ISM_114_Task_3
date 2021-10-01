#include <string>
#include <sstream>
#include <iostream>
#include "Liquid.h"

liquid::liquid(const std::string name, const double density) : name(name), density(density) {}

std::string liquid::get_name() const {
    return this->name;
}

double liquid::get_density() const {
    return this->density;
}

void liquid::set_name (const std::string name) {
    if (name == ""){
        throw;
    }
    this->name = name;
}
void liquid::set_density (const double density) {
    if (density <= 0){
        throw;
    }
    this->density = density;
}

alcohol::alcohol(const std::string name, const double density, const double strength) : liquid(name, density), strength(strength) {}

void alcohol::set_strength (const double strength) {
    if (strength <= 0){
        throw;
    }
    this->strength = strength;
}

double alcohol::get_strength() const {
    return this->strength;
}

std::string alcohol::to_string() const
{
  std::stringstream buffer;
  buffer << "{" << this->name << ", ";
  buffer << this->density << ", ";
  buffer << this->strength << "}";

  return buffer.str();
}

std::ostream& operator << (std::ostream& out, const alcohol& alcohol)
{
	return out << alcohol.to_string();
}