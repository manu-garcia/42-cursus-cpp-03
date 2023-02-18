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

    virtual void attack(const std::string &target) const;
    virtual void takeDamage(unsigned int amount);
    virtual void beRepaired(unsigned int amount);

    virtual std::string getName(void) const;
    virtual unsigned int getHitPoints(void) const;
    virtual unsigned int getEnergyPoints(void) const;
    virtual unsigned int getAttackDamage(void) const;

    virtual void setName(std::string newName);
    virtual void setHitPoints(unsigned int newHitpoints);
    virtual void setEnergyPoints(unsigned int newEnergyPoints);
    virtual void setAttackDamage(unsigned int newAttackDamage);
};

#endif