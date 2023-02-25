#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

///////////////////////////////////////////////////////////////////////////////
// Constructors / Destructor
///////////////////////////////////////////////////////////////////////////////

DiamondTrap::DiamondTrap()
{
    name = "DiamondTrap_Default_Name";
    ClapTrap::setName(name + "_clap_trap");
    setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
    std::cout << name << ": DiamondTrap::Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName)
{
    name = newName;
    ClapTrap::setName(name + "_clap_trap");
    setHitPoints(FragTrap::getHitPoints());
	setEnergyPoints(ScavTrap::getEnergyPoints());
	setAttackDamage(FragTrap::getAttackDamage());
    std::cout << name << ": DiamondTrap::Non-Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap)
{
    *this = diamondTrap;
    std::cout << name << ": DiamondTrap::Copy DiamondTrap constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << name << ": DiamondTrap:: destructor called." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////
// Operators
///////////////////////////////////////////////////////////////////////////////

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
    name = diamondTrap.getName();
    ClapTrap::setName(name + "_clap_trap");
    hitpoints = diamondTrap.getHitPoints();
    energyPoints = diamondTrap.getEnergyPoints();
    attackDamage = diamondTrap.getAttackDamage();

    std::cout << name << ": DiamondTrap:: copy operator called." << std::endl;

    return *this;
}

///////////////////////////////////////////////////////////////////////////////
// Member functions
///////////////////////////////////////////////////////////////////////////////

void DiamondTrap::attack(const std::string &target) const
{
    ScavTrap::attack(target);
}

std::string DiamondTrap::getName(void) const
{
    return this->name;
}

unsigned int DiamondTrap::getHitPoints(void) const
{
    return FragTrap::getHitPoints();
}

unsigned int DiamondTrap::getEnergyPoints() const
{
    return ScavTrap::getEnergyPoints();
}

unsigned int DiamondTrap::getAttackDamage(void) const
{
    return FragTrap::getAttackDamage();
}

void DiamondTrap::whoAmI()
{
    std::cout << name << ": DiamondTrap name!!!." << std::endl;
    std::cout << ClapTrap::getName() << ": ClapTrap name!!!." << std::endl;
}