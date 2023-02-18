#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &fragTrap);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &fragTrap);

    virtual void attack(const std::string &target) const;
    void highFivesGuys();
};

#endif