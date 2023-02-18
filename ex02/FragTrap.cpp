#include "FragTrap.hpp"

#define DEFAULT_HIT_POINTS 100
#define DEFAULT_ENERGY_POINTS 100
#define DEFAULT_ATTACK_DAMAGE 30

///////////////////////////////////////////////////////////////////////////////
// Constructors / Destructor
///////////////////////////////////////////////////////////////////////////////

FragTrap::FragTrap() : ClapTrap("FragTrap Default Name")
{
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": Non-Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;
    std::cout << name << ": Copy FragTrap constructor called." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << name << ": FragTrap destructor called." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
// Operators
///////////////////////////////////////////////////////////////////////////////

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
    name = fragTrap.getName();
    hitpoints = fragTrap.getHitpoints();
    energyPoints = fragTrap.getEnergyPoints();
    attackDamage = fragTrap.getAttackDamage();

    std::cout << name << ": FragTrap copy operator called." << std::endl;

    return *this;
}

///////////////////////////////////////////////////////////////////////////////
// Member functions
///////////////////////////////////////////////////////////////////////////////

void FragTrap::attack(const std::string &target) const
{
    std::cout << name << ": attacks " << target << ", causing "
              << attackDamage << " points of FragTrap damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << name << ": FragTrap high five!!!." << std::endl;
    return;
}