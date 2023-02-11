#include <iostream>

#include "ClapTrap.hpp"

int main(void)
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

    return 0;
}