#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    unsigned int hitpoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &clapTrap);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &clapTrap);

    void attack(const std::string &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName(void) const;
    unsigned int getHitpoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;
};

#endif