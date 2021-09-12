#include <string>
#include <sstream>
#include <iostream>
#include "Liquid.h"

liquid::liquid(const std::string name, double density) : name(name), density(density) {}

std::string liquid::get_name() const {
    return this->name;
}
double liquid::get_density() const {
    return this->density;
}
void set_name (const std::string name) const {
    if (name != ""){
        throw;
    }
    return this->name;
}
void set_density (double density) const {
    if (density <= 0){
        throw;
    }
    return this->density;
}

void new_density (double AddDensity){
    this->density = AddDensity;
}
void pos_density (double density, double positive) {
    this->density += positive;
}
void neg_density (double density, double negative){
    this->density -= negative;
}

liquid::alcohol(const std::string name, double density, double strength) : base(name, density, strength){}
void set_strength (double strength) const {
    if (strength <= 0){
        throw;
    }
    return this->strength;
}
double liquid::get_strength() const {
    return this->strength;
}

void pos_strength (double strength, double positive2) {
    this->strength += positive2;
}
void neg_strength (double strength, double negative2){
    this->strength -= negative2;
}

std::string liquid::ToString() const
{
  std::stringstream buffer;
  buffer << "{" << this->name << ", ";
  buffer << this->strength << ", ";
  buffer << this->strength << "}";

  return buffer.str();
}