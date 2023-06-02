#include "Phonebook.hpp"

Phonebook::Phonebook()
{

}

Phonebook::~Phonebook()
{

}

Contact Phonebook::get_contact(int i)
{
    return (phonebook[i]);
}

std::string Phonebook::firstname(int i)
{
    return (phonebook[i].get_firstname());
}

std::string Phonebook::lastname(int i)
{
    return (phonebook[i].get_lastname());
}

std::string Phonebook::nickname(int i)
{
    return (phonebook[i].get_nickname());
}

std::string Phonebook::phonenumber(int i)
{
    return (phonebook[i].get_phonenumber());
}

std::string Phonebook::darkestsecret(int i)
{
    return (phonebook[i].get_darkestsecret());
}

void Phonebook::create_contact(int i, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    phonebook[i].set_values(fn, ln, nn, pn, ds);
}