#include "ClapTrap.hpp"

#define DEFAULT_HIT_POINTS 10
#define DEFAULT_ENERGY_POINTS 10
#define DEFAULT_ATTACK_DAMAGE 6

///////////////////////////////////////////////////////////////////////////////
// Constructors / Destructor
///////////////////////////////////////////////////////////////////////////////

ClapTrap::ClapTrap() : name("Default Name"),
                       hitpoints(DEFAULT_HIT_POINTS),
                       energyPoints(DEFAULT_ENERGY_POINTS),
                       attackDamage(DEFAULT_ATTACK_DAMAGE)
{
    std::cout << name << ": Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name),
                                       hitpoints(DEFAULT_HIT_POINTS),
                                       energyPoints(DEFAULT_ENERGY_POINTS),
                                       attackDamage(DEFAULT_ATTACK_DAMAGE)
{
    std::cout << name << ": Non-Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    *this = clapTrap;
    std::cout << name << ": Copy ClapTrap constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << ": ClapTrap destructor called." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
// Operators
///////////////////////////////////////////////////////////////////////////////

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
    name = clapTrap.getName();
    hitpoints = clapTrap.getHitpoints();
    energyPoints = clapTrap.getEnergyPoints();
    attackDamage = clapTrap.getAttackDamage();

    std::cout << name << ": ClapTrap copy operator called." << std::endl;

    return *this;
}

///////////////////////////////////////////////////////////////////////////////
// Member functions
///////////////////////////////////////////////////////////////////////////////

void ClapTrap::attack(const std::string &target) const
{
    std::cout << name << ": attacks " << target << ", causing "
              << attackDamage << " points of ClapTrap damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << name << ": takeDamage called. " << amount << " points of damage " << std::endl;

    if (hitpoints <= amount)
    {
        hitpoints = 0;
        std::cout << name << ": Is now dead!!!" << std::endl;
    }
    else
    {
        hitpoints -= amount;
        std::cout << name << ": Has " << hitpoints << " hitpoints left. " << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << name << ": beRepaired called. With " << amount << " points " << std::endl;

    if (energyPoints < amount)
    {
        beRepaired(energyPoints);
    }
    else
    {
        hitpoints += amount;
        energyPoints -= amount;
    }
}

std::string ClapTrap::getName(void) const
{
    return name;
}

unsigned int ClapTrap::getHitpoints(void) const
{
    return hitpoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
    return attackDamage;
}