#ifndef WEPON_HPP
# define WEPON_HPP

#include <iostream>
#include <iomanip>

class Weapon  
{
    private:
        std::string type;

    public:
        Weapon(std::string type);
        ~Weapon();

        const std::string& getType(void);
        void setType(std::string type);
};

#endif