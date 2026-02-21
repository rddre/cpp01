#include "Zombie.hpp"

Zombie::Zombie() : _name("") {} // <-- AJOUT

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed" << std::endl;
}

void Zombie::announce(int i) const
{
	std::cout << _name << ": zombie " << _name << " number " << i << std::endl;
}

void Zombie::setName(const std::string& name) { // <-- AJOUT
    _name = name;
}
