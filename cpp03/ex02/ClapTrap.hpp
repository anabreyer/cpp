#ifndef CLAPTRA_HPP
# define CLAPTRA_HPP

# include <string>
# include <iostream>

class ClapTrap 
{
    protected:
        std::string name;
        int hp;
        int energy;
        int damage;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& clap);
        ~ClapTrap();
        ClapTrap& operator = (const ClapTrap& clap);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        int get_hp();
        int get_damage();
        int get_energy();
        std::string get_name();
};

#endif