#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
    // As now ScavTrap is virtual, we also want to store different property values from its base.
    // Unless they are shared and could be overriden by FragTrap.
    unsigned int energyPoints;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavTrap);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &scavTrap);

    virtual unsigned int getEnergyPoints() const;
    virtual void attack(const std::string &target) const;
    void guardGate();
};

#endif