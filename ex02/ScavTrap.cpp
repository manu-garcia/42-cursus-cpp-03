#include "ScavTrap.hpp"

#define DEFAULT_HIT_POINTS 100
#define DEFAULT_ENERGY_POINTS 50
#define DEFAULT_ATTACK_DAMAGE 20

///////////////////////////////////////////////////////////////////////////////
// Constructors / Destructor
///////////////////////////////////////////////////////////////////////////////

ScavTrap::ScavTrap() : ClapTrap("ScavTrap Default Name")
{
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": Default ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": Non-Default ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;
    std::cout << name << ": Copy ScavTrap constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << ": ScavTrap destructor called." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
// Operators
///////////////////////////////////////////////////////////////////////////////

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    name = scavTrap.getName();
    hitpoints = scavTrap.getHitpoints();
    energyPoints = scavTrap.getEnergyPoints();
    attackDamage = scavTrap.getAttackDamage();

    std::cout << name << ": ScavTrap copy operator called." << std::endl;

    return *this;
}

///////////////////////////////////////////////////////////////////////////////
// Member functions
///////////////////////////////////////////////////////////////////////////////

void ScavTrap::attack(const std::string &target) const
{
    std::cout << name << ": attacks " << target << ", causing "
              << attackDamage << " points of ScavTrap damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name << ": ScavTrap have enterred in Gate keeper mode." << std::endl;
}