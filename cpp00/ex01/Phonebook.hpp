#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
// # include <stdio.h>
// # include <unistd.h>
# include "Contact.hpp"

class Phonebook
{
    private:
    Contact phonebook[8];

    public:
    Phonebook();
    ~Phonebook();
    void create_contact(int i, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
    Contact get_contact(int i);

    std::string firstname(int i);
    std::string lastname(int i);
    std::string nickname(int i);
    std::string phonenumber(int i);
    std::string darkestsecret(int i);
};

#endif