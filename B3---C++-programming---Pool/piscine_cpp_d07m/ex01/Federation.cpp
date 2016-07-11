#include <iostream>
#include <string>
#include <stdlib.h>
#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp) : _captain(NULL) {
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  this->_core = NULL;
  std::cout << "The ship USS " << name << " has been finished. It is " << length << " m in length and " << width << " m in width." << std::endl << "It can go to Warp " << maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship() {}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core) {
  this->_core = core;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore() {
  std::cout << "USS " << this->_name << ": The core is " << (this->_core->checkReactor()->isStable() == true ? "stable" : "unstable") << " at the time." << std::endl;
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain) {
  this->_captain = captain;
  std::cout << captain->_name << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name) : _age(42) {
  this->_name = name;
}

Federation::Starfleet::Captain::~Captain() {}

void Federation::Starfleet::Captain::setAge(int age) {
  this->_age = age;
}

int Federation::Starfleet::Captain::getAge() {
  return (this->_age);
}

Federation::Starfleet::Ensign::Ensign(std::string name) {
  this->_name = name;
  std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name) {
  this->_length = length;
  this->_width = width;
  this->_name = name;

  std::cout << "The independant ship " << name << " just finished its construction. It is " << length << " m in length and " << width << " m in width." << std::endl;
}

Federation::Ship::~Ship() {}

void Federation::Ship::setupCore(WarpSystem::Core *core) {
  this->_core = core;
  std::cout << this->_name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore() {
  std::cout << this->_name << ": The core is " << (this->_core->checkReactor()->isStable() == true ? "stable" : "unstable") << " at the time." << std::endl;
}
