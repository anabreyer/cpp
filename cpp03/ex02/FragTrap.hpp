#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &Frag);
        ~FragTrap();
        FragTrap& operator = (const FragTrap &frag);
        void highFivesGuys(void);;
        void attack(const std::string& target);
};

#endif 