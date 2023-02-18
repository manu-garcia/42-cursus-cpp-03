#include "FragTrap.hpp"

#define DEFAULT_HIT_POINTS 101
#define DEFAULT_ENERGY_POINTS 100
#define DEFAULT_ATTACK_DAMAGE 30

///////////////////////////////////////////////////////////////////////////////
// Constructors / Destructor
///////////////////////////////////////////////////////////////////////////////

FragTrap::FragTrap() : ClapTrap("FragTrap Default Name")
{
    name = ClapTrap::getName();
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": FragTrap::Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName)
{
    name = ClapTrap::getName();
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": FragTrap::Non-Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << name << ": FragTrap::Copy FragTrap constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << name << ": FragTrap:: destructor called." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
// Operators
///////////////////////////////////////////////////////////////////////////////

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    name = fragTrap.getName();
    hitpoints = fragTrap.getHitPoints();
    energyPoints = fragTrap.getEnergyPoints();
    attackDamage = fragTrap.getAttackDamage();

    std::cout << name << ": FragTrap:: copy operator called." << std::endl;

    return *this;
}

///////////////////////////////////////////////////////////////////////////////
// Member functions
///////////////////////////////////////////////////////////////////////////////

void FragTrap::attack(const std::string &target) const
{
    std::cout << name << ": FragTrap::attacks " << target << ", causing "
              << attackDamage << " points of FragTrap damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << name << ": FragTrap::FragTrap high five!!!." << std::endl;
    return;
}