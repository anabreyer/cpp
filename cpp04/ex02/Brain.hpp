#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &other);
        Brain(std::string ideas);
        ~Brain();
        Brain& operator = (const Brain &other);
        std::string*	getIdeas(void);
        void setIdeas(std::string ideas);
};

#endif