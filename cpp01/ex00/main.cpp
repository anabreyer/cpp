#include "Zombie.hpp"

Zombie* newZombie( std::string name );

 void randomChump( std::string name );

 int main(void)
 {
    Zombie *z = newZombie("Jisu");
    z->announce();
    randomChump("Glenn");
    delete z;
 }