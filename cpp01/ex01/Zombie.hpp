#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
    private:
    std::string name;

    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie();

         void announce( void );
         void set_name(std::string name);
};

Zombie	*newZombie(std::string name);

void		randomChump(std::string name);

#endif
