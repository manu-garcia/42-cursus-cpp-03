#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

#include "ScavTrap.hpp"

class FragTrap: public ScavTrap
{

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &scavTrap);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &scavTrap);

    void attack(const std::string &target) const;
    void highFivesGuys();
};

#endif