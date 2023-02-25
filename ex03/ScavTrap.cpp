#include "ScavTrap.hpp"

#define DEFAULT_HIT_POINTS 100
#define DEFAULT_ENERGY_POINTS 50
#define DEFAULT_ATTACK_DAMAGE 20

///////////////////////////////////////////////////////////////////////////////
// Constructors / Destructor
///////////////////////////////////////////////////////////////////////////////

ScavTrap::ScavTrap() : ClapTrap("ScavTrap Default Name")
{
    name = ClapTrap::getName();
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": ScavTrap::Default ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName)
{
    name = ClapTrap::getName();
    hitpoints = DEFAULT_HIT_POINTS;
    energyPoints = DEFAULT_ENERGY_POINTS;
    attackDamage = DEFAULT_ATTACK_DAMAGE;
    std::cout << name << ": ScavTrap::Non-Default ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;
    std::cout << name << ": ScavTrap::Copy ScavTrap constructor called." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << ": ScavTrap:: destructor called." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
// Operators
///////////////////////////////////////////////////////////////////////////////

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap)
{
    name = scavTrap.getName();
    hitpoints = scavTrap.getHitPoints();
    energyPoints = scavTrap.getEnergyPoints();
    attackDamage = scavTrap.getAttackDamage();

    std::cout << name << ": ScavTrap:: copy operator called." << std::endl;

    return *this;
}

///////////////////////////////////////////////////////////////////////////////
// Member functions
///////////////////////////////////////////////////////////////////////////////

void ScavTrap::attack(const std::string &target) const
{
    std::cout << name << ": ScavTrap::attacks " << target << ", causing "
              << attackDamage << " points of ScavTrap damage!" << std::endl;
}

// In a polymorfic call of a ScavTrap object casted to ClapTrap, the compiler
// will call this ScavTrap method and not the ClapTrap::getEnergyPoints.
// Also the property energyPoints is stored at the ScavTrap level so it does
// not get shared or overrided by with FragTrap.
unsigned int ScavTrap::getEnergyPoints() const
{
    return energyPoints;
}

void ScavTrap::guardGate()
{
    std::cout << name << ": ScavTrap::ScavTrap have enterred in Gate keeper mode." << std::endl;
}