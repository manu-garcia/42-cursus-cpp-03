#include <iostream>

#include "DiamondTrap.hpp"

static void showPolymorphicTrapInfo(ClapTrap &clapTrap)
{
    std::cout << clapTrap.getName() << ": main::has " << clapTrap.getHitPoints() << " hit points." << std::endl;
    std::cout << clapTrap.getName() << ": main::has " << clapTrap.getEnergyPoints() << " energy points." << std::endl;
    std::cout << clapTrap.getName() << ": main::has " << clapTrap.getAttackDamage() << " attack damage points." << std::endl;
    clapTrap.attack(clapTrap.getName());
    clapTrap.takeDamage(clapTrap.getAttackDamage());
    clapTrap.beRepaired(10);

    std::cout << std::endl;
}

int main(void)
{
    ScavTrap scavTrap("ScavTrap Rebel");
    showPolymorphicTrapInfo(scavTrap);

    FragTrap fragTrap("FragTrap Rebel");
    showPolymorphicTrapInfo(fragTrap);

    DiamondTrap diamondTrap("Diamond Rebel");
    showPolymorphicTrapInfo(diamondTrap);

    std::cout << "main:: Specific methods:" << std::endl;
    std::cout << std::endl;

    std::cout << "main:: DiamondTrap::whoAmI" << std::endl;
	diamondTrap.whoAmI();
    std::cout << std::endl;

    std::cout << "main:: DiamondTrap::highFivesGuys" << std::endl;
	diamondTrap.highFivesGuys();
    std::cout << std::endl;

    return 0;
}