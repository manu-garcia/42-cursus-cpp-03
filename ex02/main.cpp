#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void clapTrapTest(void)
{
    ClapTrap rebel("Rebel");
    ClapTrap empire("Empire");

    rebel.attack(empire.getName());
    empire.takeDamage(rebel.getAttackDamage());
    empire.beRepaired(1);

    empire.attack(rebel.getName());
    rebel.takeDamage(empire.getAttackDamage());
    rebel.beRepaired(1);
    std::cout << '\n';

    rebel.attack(empire.getName());
    empire.takeDamage(rebel.getAttackDamage());
    std::cout << '\n';
}

static void scavTrapTest(void)
{
    ScavTrap rebel("Rebel");
    ScavTrap empire("Empire");

    rebel.attack(empire.getName());
    empire.takeDamage(rebel.getAttackDamage());
    empire.beRepaired(1);

    empire.attack(rebel.getName());
    rebel.takeDamage(empire.getAttackDamage());
    rebel.beRepaired(1);
    std::cout << '\n';

    rebel.attack(empire.getName());
    empire.takeDamage(rebel.getAttackDamage());
    std::cout << '\n';

    rebel.guardGate();
    std::cout << '\n';
}

int main(void)
{
    clapTrapTest();

    std::cout << '\n';

    scavTrapTest();

    return 0;
}