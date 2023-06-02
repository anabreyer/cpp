#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

 int main(void)
 {
   int N = 20;


   Zombie *horde = zombieHorde(N, "Jisu");
   for (int i = 0; i < N; i++)
      horde[i].announce();
   delete [] horde;
 }